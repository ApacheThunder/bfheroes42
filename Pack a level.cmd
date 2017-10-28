@Echo Off
@Echo Packing level. Please wait....
bf1942_r +makeArchive Bf1942\levels\Seaside_Skirmish 1 1
Move Bf1942\levels\Seaside_Skirmish.rfa C:
del C:Bf1942\levels\*.lst
del C:bf1942.pid
Echo LST Files deleted...Exiting...
