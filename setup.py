# -*- coding: utf-8 -*-
"""
Information of the Cnerator application to be used by setuptools.
"""

from __future__ import absolute_import

import os

from setuptools import setup, find_packages

__contacts = [
    ("Javier Escalada Gomez", "javier.escalada.gomez@gmail.com"),
    ("Francisco Ortin", "francisco.ortin@gmail.com"),
]

__authors = [c[0] for c in __contacts]
__author = ", ".join(c[0] for c in __contacts)
__credits = []
__copyright = "Copyright (C) 2016 " + __author
__license = "BSD 3 Clause"
__version = "0.1.0"
__maintainer = __contacts[0][0]
__email = __contacts[0][1]
__contact = __email
__status = "Alpha"
__url = "https://github.com/Kerrigan29a/cnerator"


def read_lines(file_name):
    file = open(os.path.join(os.path.dirname(__file__), file_name))
    lines = file.readlines()
    file.close()
    return lines


def read_file(file_name):
    lines = read_lines(file_name)
    return "".join(lines)


setup(
    name='cnerator',
    version=__version,
    description='C source code generator',
    long_description=read_file("README.md"),
    long_description_content_type="text/markdown",
    author=__author,
    author_email=__email,
    maintainer=__maintainer,
    maintainer_email=__email,
    url=__url,
    download_url=__url,
    license=__license,
    keywords="C language lang code generator",
    install_requires=read_lines("requirements.txt"),
    dependency_links=['singledispatch', 'numpy'],
    packages=find_packages(),
    platforms='any',
    classifiers=[
        'License :: OSI Approved :: BSD License',
        'Operating System :: OS Independent',
        'Programming Language :: Python',
        'Programming Language :: C',
        'Topic :: Software Development :: Code Generators',
    ],
    python_requires='>=3.7',
    # test_suite='',
    entry_points = {
        'console_scripts': ['cnerator=main:main'],
    }
)
