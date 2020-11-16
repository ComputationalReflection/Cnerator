@echo off
setlocal EnableDelayedExpansion
setlocal EnableExtensions

TITLE Comment incorrect lines

set /a i=0
set CWD=%~dp0
call %CWD%\..\..\..\..\activate_env_64
cd %CWD%
goto loop

:loop
set /a i=i+1
nmake clean
nmake > compilation_cl_%i%.log
if %errorlevel% equ 0 goto end else goto comment

:comment
python commenter.py compilation_cl_%i%.log -p cl_config.json -b -o -e cp437 -E utf8
goto loop

:end
echo Every file commented. Now it must compile correctly
