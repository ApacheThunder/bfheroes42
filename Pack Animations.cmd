@Echo Off
Echo This BAT file can be modified to pack a single RFA of your choice!
echo.
Echo Packing Animations RFA...
bf1942_r +makeArchive animations 1 1
del *.lst
del bf1942.pid