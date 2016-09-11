@Echo off
cls
Echo.
Echo.
Echo Packing %1.rfa
bf1942_r +makeArchive %1 1 1
@del *.pid
@del *.lst
Echo.
Echo.
Echo Finished packing %1.rfa