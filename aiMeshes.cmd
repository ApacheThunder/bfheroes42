@Echo Off
Echo This BAT file can be modified to pack a single RFA of your choice!
echo.
Echo Packing aiMeshes RFA...
bf1942_r +makeArchive ai 1 1
bf1942_r +makeArchive aiMeshes 1 1
del *.lst
del bf1942.pid