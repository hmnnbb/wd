@echo off
chcp 65001 >nul
setlocal
rem Usage: build.bat "D:\path\to\source.c|cpp"
set "SRC=%~1"
if "%SRC%"=="" (
  echo [build] ERROR: no source file given
  exit /b 1
)
set "BASE=%~dpn1"
set "EXT=%~x1"
set "CC=gcc"
if /i "%EXT%"==".cpp" set "CC=g++"
if /i "%EXT%"==".cc"  set "CC=g++"
if /i "%EXT%"==".cxx" set "CC=g++"
if /i "%EXT%"==".c++" set "CC=g++"
echo [build] compiler = %CC%
echo [build] %SRC%
echo [build]   -^> %BASE%.exe
"D:\tools\msys64\ucrt64\bin\%CC%.exe" -fdiagnostics-color=always -g -fexec-charset=UTF-8 "%SRC%" -o "%BASE%.exe"
set "RC=%ERRORLEVEL%"
if "%RC%"=="0" (
  echo [build] SUCCESS
) else (
  echo [build] FAILED rc=%RC%
)
exit /b %RC%