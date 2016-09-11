@Echo Off
Echo This BAT file can be modified to pack a single RFA of your choice!
echo.
Echo Packing standardMesh RFA...
bf1942_r +makeArchive StandardMesh 1 1
del *.lst
del *.pid