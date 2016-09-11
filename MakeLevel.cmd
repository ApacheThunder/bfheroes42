@Echo off
cls
Echo.
Echo.
Echo Packing %1.rfa
bf1942_r +makeArchive bf1942\levels\%1 1 1
del bf1942\levels\*.lst
del *.pid
Move bf1942\levels\%1.rfa G:
Echo.
Echo.
Echo Finished packing %1.rfa