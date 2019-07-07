#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
USING_NS_CC;
using namespace CocosDenshion;
#define NUM_DOGES 25

HelloWorld::~HelloWorld() {
    CC_SAFE_RELEASE(_doges);
}

CCScene* HelloWorld::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    HelloWorld *layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if (!CCLayerColor::initWithColor(ccc4(200, 230, 255, 255)))
    {
        return false;
    }

    _winSize = CCDirector::sharedDirector()->getWinSize();
    // sun
    CCSprite * sun = CCSprite::create("sun.png");
    sun->setAnchorPoint(ccp(1, 1));
    sun->setPosition(ccp(_winSize.width, _winSize.height));
    this->addChild(sun, 0);
    // grasses
    CCSprite * grasses = CCSprite::create("grasses.png");
    grasses->setAnchorPoint(ccp(0, 0));
    grasses->setPosition(ccp(0, 0));
    this->addChild(grasses, 3);

    _doges = CCArray::create();
    CCSpriteBatchNode * dogeNode = CCSpriteBatchNode::create("doge.png");
    this->addChild(dogeNode, 0);
    for (int i = 0; i < NUM_DOGES; i++) {
        CCSprite * doge = CCSprite::createWithTexture(dogeNode->getTexture());
        doge->setVisible(false);
        doge->setScale(0.5f);
        dogeNode->addChild(doge, 1);
        _doges->addObject(doge);
    }
    _doges->retain();

    // start sprite
    _start = CCSprite::create("start.png");
    _start->setPosition(ccp(_winSize.width * 0.5f, _winSize.height * 0.5f));
    this->addChild(_start, 2);

    // game over sprite
    _gameOver = CCSprite::create("gameover.png");
    _gameOver->setPosition(ccp(_winSize.width * 0.5f, _winSize.height * 0.5f));
    _gameOver->setVisible(false);
    this->addChild(_gameOver, 2);

    // scoreLabel
    _scoreLabel = CCLabelBMFont::create("0", "font.fnt");
    _scoreLabel->setAnchorPoint(ccp(0, 1));
    _scoreLabel->setPosition((ccp(20, _winSize.height - 20)));
    this->addChild(_scoreLabel, 2);


    _running = false;
    // update関数が呼び出されるように
    this->setTouchMode(kCCTouchesOneByOne);  // シングルタッチモード
    this->setTouchEnabled(true);  // タッチ機能の有効化
    this->scheduleUpdate();
    SimpleAudioEngine::sharedEngine()->playBackgroundMusic("bgm.mp3", true);
    SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();

    return true;
}

void HelloWorld::update(float dt) {
    if (!_running) {
        return;
    }

    _dogeTimer += dt;
    if (_dogeTimer >= _dogeInterval) {
        // インデックスのわんこを取得
        CCSprite * doge = (CCSprite *) _doges->objectAtIndex(_dogeIndex);

        if (doge->isVisible()) { // 既に画面上にそのわんこが居たら何もしない
            return;
        }

        // インデックスの更新
        _dogeIndex++;
        if (_dogeIndex == NUM_DOGES) {
            _dogeIndex = 0;
        }

        // 犬が出てくるx座標と犬の落下地点のx座標を決める
        int x = arc4random() % (int) (_winSize.width * 0.8f)
                + _winSize.width * 0.1f;
        int target_x = rand() % (int) (_winSize.width * 0.8f)
                + _winSize.width * 0.1f;
        doge->stopAllActions();  // 犬のアクションを止める

        //犬を画面のちょうど見えないところに設置
        doge->setPosition(
                ccp(x,
                        _winSize.height
                                + doge->boundingBox().size.height * 0.5f));

        // わんこのアクションを作成

        // わんこがくるくる回転するアクション
        float rotateSpeed = (arc4random() % 10) * 0.1f;
        CCActionInterval* rotate = CCRotateBy::create(rotateSpeed, -90);
        CCAction* repeatRotate = CCRepeatForever::create(rotate);

        // わんこが落ちていくアクション
        CCFiniteTimeAction* sequence = CCSequence::create(
                CCMoveTo::create(_difficulty,
                        ccp(target_x, doge->boundingBox().size.height * 0.3f)),
                        CCCallFunc::create(this,
                                callfunc_selector(HelloWorld::hitGround)),
                NULL);

        doge->setVisible(true);
        doge->runAction(repeatRotate);
        doge->runAction(sequence);

        // reset Doge Timer
        _dogeTimer = 0;
        _dogeInterval = 0.2f + (arc4random() % 5) * 0.1f;
    }
}


bool HelloWorld::ccTouchBegan(CCTouch * touch, CCEvent * event) {
    if (!_running) {
        if (_start->isVisible() || _gameOver->isVisible()) {
            this->resetGame();
        }
        return true;
    }

    CCSprite * doge;
    CCObject * obj;

    CCARRAY_FOREACH(_doges, obj) {
        doge = (CCSprite *) obj;
        if (!doge->isVisible()) {
            continue;
        }
        if (doge->boundingBox().containsPoint(touch->getLocation())) { // タッチされた
            doge->stopAllActions();
            doge->setVisible(false);
            _score++;
            _scoreLabel->setString(
                    CCString::createWithFormat("%d", _score)->getCString());
            this->increaseDifficulty();
            SimpleAudioEngine::sharedEngine()->playEffect("touch.mp3");
        }
    }
    return true;
}

void HelloWorld::resetGame() {
    _dogeTimer = 0;
    _dogeInterval = 0;
    _dogeIndex = 0;
    _running = true;
    _start->setVisible(false);
    _gameOver->setVisible(false);
    _difficulty = 3.0f;
    _score = 0;

    _scoreLabel->setString("0");

    CCSprite * doge;
    CCObject * obj;
    CCARRAY_FOREACH(_doges, obj) {
        doge = (CCSprite *) obj;
        doge->setVisible(false);
    }
    SimpleAudioEngine::sharedEngine()->rewindBackgroundMusic();
    SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
    SimpleAudioEngine::sharedEngine()->playEffect("dog.mp3");
}


void HelloWorld::hitGround() {
    // わんこのアクションを止める
    CCSprite * doge;
    CCObject * obj;
    CCARRAY_FOREACH(_doges, obj) {
        doge = (CCSprite *) obj;
        doge->stopAllActions();
    }

    // ゲームの更新を止める
    _running = false;

    this->scheduleOnce(schedule_selector(HelloWorld::gameOver), 0.5f);
    SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
    SimpleAudioEngine::sharedEngine()->playEffect("dog.mp3");
}

void HelloWorld::gameOver() {
    _gameOver->setVisible(true);
}


void HelloWorld::increaseDifficulty() {
    _difficulty -= 0.03f;
}
