@Echo Off
Echo This BAT file can be modified to pack a single RFA of your choice!
echo.
Echo Packing treeMesh RFA...
bf1942_r +makeArchive TreeMesh 1 1
del *.lst
del *.pid