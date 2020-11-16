# -*- coding: utf-8 -*-

from __future__ import absolute_import

from setuptools import setup, find_packages
import os



def read(fname):
    return open(os.path.join(os.path.dirname(__file__), fname)).read()



def readlines(fname):
    return open(os.path.join(os.path.dirname(__file__), fname)).readlines()


contacts = [
    ("Javier Escalada Gomez", "javier.escalada.gomez@gmail.com"),
    ("Francisco Ortin Soler", "ortin@lsi.uniovi.es"),
]

__authors__ =       [c[0] for c in contacts]
__author__ =        ", ".join(c[0] for c in contacts)
__credits__ =       []
__copyright__ =     "Copyright (C) 2016 " + __author__
__license__ =       "BSD 3 Clause"
__version__ =       "0.1.0"
__maintainer__ =    contacts[0][0]
__email__ =         contacts[0][1]
__contact__ =       __email__
__status__ =        "Alpha"




setup(
    name='cnerator',
    version=__version__,
    description='C code generator',
    long_description=read('README.md'),
    author=__author__,
    author_email=__email__,
    maintainer=__maintainer__,
    maintainer_email=__email__,
    # url='',
    # download_url='',
    license=__license__,
    keywords="c clang code generator",
    install_requires=readlines("requirements.txt"),
    # dependency_links=[],
    packages=find_packages(),
    platforms='any',
    classifiers=[
        'License :: OSI Approved :: BSD License',
        'Operating System :: OS Independent',
        'Programming Language :: Python',
        'Programming Language :: C',
        'Topic :: Software Development :: Code Generators',
    ],
    # test_suite='',
    entry_points = {
        'console_scripts': ['cnerator=main:main'],
    }
)
