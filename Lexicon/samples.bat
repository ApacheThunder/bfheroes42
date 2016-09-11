@echo off
for /f "delims=." %%a in ('dir *.sm /b') do call samplesmaker.exe %1 %%a
