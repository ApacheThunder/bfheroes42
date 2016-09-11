@Echo Off
@Echo Packing level. Please wait....
bf1942_r +makeArchive Bf1942\levels\Lunar_Landing_CQ 1 1
Move Bf1942\levels\Lunar_Landing_CQ.rfa G:
del G:Bf1942\levels\*.lst
del G:bf1942.pid
Echo LST Files deleted...Exiting...
