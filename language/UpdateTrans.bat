@echo off
set PATH=C:\Qt\Qt5.12.11\5.12.11\msvc2015_64\bin;%PATH%
cd ./
lupdate.exe ../LVGLBuilder.pro -ts en.ts
lupdate.exe ../LVGLBuilder.pro -ts jp.ts
lupdate.exe ../LVGLBuilder.pro -ts sc_zh.ts
lupdate.exe ../LVGLBuilder.pro -ts tc_zh.ts
pause