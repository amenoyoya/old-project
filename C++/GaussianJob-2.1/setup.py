from distutils.core import setup
import py2exe, sys, os

sys.argv.append('py2exe')

setup(
	options = {'py2exe': {'compressed': True, 'optimize': 2, 'bundle_files': 2}},
	console = [{'script': 'GaussianJob.py', 'icon_resources': [(1,'icon.ico')]}],
	zipfile = None
)

os.system("editbin /subsystem:windows dist/GaussianJob.exe")
