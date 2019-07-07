#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

USING_NS_CC;

class HelloWorld : public cocos2d::CCLayerColor
{
    CCSize _winSize;
    CCArray * _doges;
    CCSprite * _start;
    CCSprite * _gameOver;

    int _dogeIndex;
    float _dogeTimer;
    float _dogeInterval;
    float _difficulty;
    int _score;
    CCLabelBMFont * _scoreLabel;

    bool _running;
    void hitGround();
    void resetGame();
    void increaseDifficulty();


public:
    ~HelloWorld();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::CCScene* scene();
    
    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);

    void update(float dt);

    bool ccTouchBegan(CCTouch * touch, CCEvent * event);

    void gameOver();
};

#endif // __HELLOWORLD_SCENE_H__
