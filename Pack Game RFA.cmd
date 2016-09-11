@Echo Off
echo.
Echo Packing bf1942\Game...
bf1942_r +makeArchive bf1942\Game 1 1
move Bf1942\Game.rfa G:
del G:bf1942\*.lst
del bf1942.pid