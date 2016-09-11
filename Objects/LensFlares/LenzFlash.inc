rem
rem *** "TSun" of primitive LensFlare ***
rem
ObjectTemplate.create LensFlare LenzFlash
ObjectTemplate.setLensFlareCount 3
ObjectTemplate.setCoronaCount 4
ObjectTemplate.initLensFlares
ObjectTemplate.enable 0
REM
REM *** Falre no:0 ***
REM
ObjectTemplate.setFlareTexture ring3.tga 0
ObjectTemplate.setFlareSize 1 0
ObjectTemplate.setFlaresize2 5 0
ObjectTemplate.setFlareRot 0 0
ObjectTemplate.setFlareColor 255/235/235/50 0
objectTemplate.setFlareColor2 50/150/200/50 0
REM
REM *** Falre no:1 ***
REM
ObjectTemplate.setFlareTexture ring3.tga 1
ObjectTemplate.setFlareSize 5 1
ObjectTemplate.setFlareSize2 0 1
ObjectTemplate.setFlareRot 0 1
ObjectTemplate.setFlareColor 255/255/255/100 1
ObjectTemplate.setFlareColor2 100/100/150/150 1
REM
REM *** Falre no:2 > LittleDot ***
REM
ObjectTemplate.setFlareTexture ring11.tga 2
ObjectTemplate.setFlareSize 1 2
ObjectTemplate.setFlaresize2 3 2
ObjectTemplate.setFlareRot 0 2
ObjectTemplate.setFlareColor 255/255/255/100 2
ObjectTemplate.setFlareColor2 255/200/200/50 2
REM
REM *** Corona no:0 ***
REM
ObjectTemplate.setCoronaTexture sunflare0.tga 0
ObjectTemplate.setCoronaSize 5 0
ObjectTemplate.setCoronasize2 10 0
ObjectTemplate.setCoronaRot 0.1 0
ObjectTemplate.setCoronaColor 255/255/255/200 0
ObjectTemplate.setCoronaColor2 255/255/255/200 0
REM
REM *** Corona no:1 - Red aura***
REM
ObjectTemplate.setCoronaTexture sunflare9.tga 1
ObjectTemplate.setCoronaSize 5 1
ObjectTemplate.setCoronasize2 20 1
ObjectTemplate.setCoronaRot -1 1
ObjectTemplate.setCoronaColor 250/50/0/50 1
ObjectTemplate.setCoronaColor2 250/50/0/50 1
REM
REM *** Corona no:2 Streaks ***
REM
ObjectTemplate.setCoronaTexture sunflare6.tga 2
ObjectTemplate.setCoronaSize 6 2
ObjectTemplate.setCoronaSize2 7 2
ObjectTemplate.setCoronaRot 0.2 2
ObjectTemplate.setCoronaColor 250/225/225/75 2
ObjectTemplate.setCoronaColor2 250/225/225/75 2
REM
REM *** Corona no:3 Disc ***
REM
ObjectTemplate.setCoronaTexture SunDisc.tga 3
ObjectTemplate.setCoronaSize 1.5 3
ObjectTemplate.setCoronasize2 1.5 3
ObjectTemplate.setCoronaRot 0.1 3
ObjectTemplate.setCoronaColor 255/255/255/200 3
ObjectTemplate.setCoronaColor2 255/255/255/200 3
REM **
ObjectTemplate.setIsSun 1