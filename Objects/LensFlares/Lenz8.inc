rem
rem *** "TSun" of primitive LensFlare ***
rem
ObjectTemplate.create LensFlare TSun9
ObjectTemplate.setLensFlareCount 3
ObjectTemplate.setCoronaCount 4
ObjectTemplate.initLensFlares
ObjectTemplate.setOcclusionQuadWidthHeight 150 150
REM
REM *** Falre no:0 ***
REM
ObjectTemplate.setFlareTexture ring3.tga 0
ObjectTemplate.setFlareSize 10 0
ObjectTemplate.setFlareSize2 1 0
ObjectTemplate.setFlareRot 0 0
ObjectTemplate.setFlareColor 255/255/255/50 0
ObjectTemplate.setFlareColor2 255/255/255/0 0
REM
REM *** Falre no:1 ***
REM
ObjectTemplate.setFlareTexture ring3.tga 1
ObjectTemplate.setFlareSize 7 1
ObjectTemplate.setFlareSize2 1 1
ObjectTemplate.setFlareRot 0 1
ObjectTemplate.setFlareColor 255/255/255/30 1
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
REM *** Corona no:0 ***
REM
ObjectTemplate.setCoronaTexture sunflare7.tga 0
ObjectTemplate.setCoronaSize 1 0
ObjectTemplate.setCoronaSize2 0 0
ObjectTemplate.setCoronaRot 0 0
ObjectTemplate.setCoronaColor 255/255/255/225 0
ObjectTemplate.setCoronaColor2 255/255/255/10 0
REM
REM *** Corona no:1 - Red aura***
REM
ObjectTemplate.setCoronaTexture sunflare9.tga 1
ObjectTemplate.setCoronaSize 10 1
ObjectTemplate.setCoronaSize2 5 1
ObjectTemplate.setCoronaRot 0 1
ObjectTemplate.setCoronaColor 220/200/55/50 1
ObjectTemplate.setCoronaColor2 220/200/55/50 1
REM
REM *** Corona no:2 ***
REM
ObjectTemplate.setCoronaTexture sunflare6.tga 2
ObjectTemplate.setCoronaSize 3 2
ObjectTemplate.setCoronaSize2 6 2
ObjectTemplate.setCoronaRot 0.25 2
ObjectTemplate.setCoronaColor 220/200/55/50 2
ObjectTemplate.setCoronaColor2 220/200/55/40 2
REM
REM *** Corona no:3 Disc ***
REM
ObjectTemplate.setCoronaTexture SunDisc.tga 3
ObjectTemplate.setCoronaSize 1.5 3
ObjectTemplate.setCoronasize2 1.5 3
ObjectTemplate.setCoronaRot 0.1 3
ObjectTemplate.setCoronaColor 255/255/255/200 3
ObjectTemplate.setCoronaColor2 255/255/255/200 3