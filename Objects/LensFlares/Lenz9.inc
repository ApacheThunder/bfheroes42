rem
rem *** "TSun" of primitive LensFlare ***
rem
ObjectTemplate.create LensFlare TSun10
ObjectTemplate.setLensFlareCount 3
ObjectTemplate.setCoronaCount 2
ObjectTemplate.initLensFlares
ObjectTemplate.setOcclusionQuadWidthHeight 200 200
REM
REM *** Falre no:0 ***
REM
ObjectTemplate.setFlareTexture ring3.tga 0
ObjectTemplate.setFlareSize 10 0
ObjectTemplate.setFlareSize2 1 0
ObjectTemplate.setFlareRot 0 0
ObjectTemplate.setFlareColor 255/50/150/50 0
ObjectTemplate.setFlareColor2 255/55/100/0 0
REM
REM *** Falre no:1 ***
REM
ObjectTemplate.setFlareTexture ring4.tga 1
ObjectTemplate.setFlareSize 1 1
ObjectTemplate.setFlareSize2 3 1
ObjectTemplate.setFlareRot 0 1
ObjectTemplate.setFlareColor 255/200/255/30 1
ObjectTemplate.setFlareColor2 255/255/255/0 1
REM
REM *** Falre no:2 ***
REM
ObjectTemplate.setFlareTexture ring3.tga 2
ObjectTemplate.setFlareSize 4 2
ObjectTemplate.setFlareSize2 1 2
ObjectTemplate.setFlareRot 0 2
ObjectTemplate.setFlareColor 255/255/255/30 2
ObjectTemplate.setFlareColor2 255/255/255/0 2
REM
REM *** Corona no:0 Disc ***
REM
ObjectTemplate.setCoronaTexture SunDisc.tga 0
ObjectTemplate.setCoronaSize 1 0
ObjectTemplate.setCoronasize2 0.5 0
ObjectTemplate.setCoronaRot 0.1 0
ObjectTemplate.setCoronaColor 255/255/255/10 0
ObjectTemplate.setCoronaColor2 255/255/255/100 0
REM
REM *** Corona no:1 ***
REM
ObjectTemplate.setCoronaTexture sunflare10.tga 1
ObjectTemplate.setCoronaSize 4 1
ObjectTemplate.setCoronaSize2 5 1
ObjectTemplate.setCoronaRot 0 1
ObjectTemplate.setCoronaColor 255/255/220/100 1
ObjectTemplate.setCoronaColor2 255/255/220/75 1
REM **