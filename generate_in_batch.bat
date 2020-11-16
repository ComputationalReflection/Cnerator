@echo off
setlocal EnableDelayedExpansion
setlocal EnableExtensions

TITLE Cnerator batch


mkdir ..\..\programs\paper1_3k_2_size_v1
mkdir ..\..\programs\paper1_3k_3_size_v1
mkdir ..\..\programs\paper1_3k_4_size_v1
mkdir ..\..\programs\paper1_3k_5_size_v1
mkdir ..\..\programs\paper1_3k_6_size_v1

copy /A /V /Y ..\..\programs\paper1_3k_1_size_v1\Makefile ..\..\programs\paper1_3k_2_size_v1\Makefile
copy /A /V /Y ..\..\programs\paper1_3k_1_size_v1\Makefile ..\..\programs\paper1_3k_3_size_v1\Makefile
copy /A /V /Y ..\..\programs\paper1_3k_1_size_v1\Makefile ..\..\programs\paper1_3k_4_size_v1\Makefile
copy /A /V /Y ..\..\programs\paper1_3k_1_size_v1\Makefile ..\..\programs\paper1_3k_5_size_v1\Makefile
copy /A /V /Y ..\..\programs\paper1_3k_1_size_v1\Makefile ..\..\programs\paper1_3k_6_size_v1\Makefile

python main.py -w ..\..\programs\paper1_3k_2_size_v1 -p 6
python main.py -w ..\..\programs\paper1_3k_3_size_v1 -p 6
python main.py -w ..\..\programs\paper1_3k_4_size_v1 -p 6
python main.py -w ..\..\programs\paper1_3k_5_size_v1 -p 6
python main.py -w ..\..\programs\paper1_3k_6_size_v1 -p 6
