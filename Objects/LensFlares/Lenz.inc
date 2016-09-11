rem ************************
rem *** Lenzflare ***
rem ************************
rem
rem *** "TSun" of primitive LensFlare ***
rem
rem *** Original LensFlare found in El Alamein ***
rem
ObjectTemplate.create LensFlare TSun
ObjectTemplate.setLensFlareCount 5
ObjectTemplate.setBackFlareCount 0
ObjectTemplate.setCoronaCount 2
ObjectTemplate.initLensFlares
ObjectTemplate.setVisibilityAngleDeg 360
REM
REM *** Falre no:1 ***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 0
ObjectTemplate.setFlareDestBlend BMOne 0
ObjectTemplate.setFlareTexture ring5.tga 0
ObjectTemplate.setFlareSize 3 0
ObjectTemplate.setFlareScale -1.5 0
ObjectTemplate.setFlareRot 0 0
ObjectTemplate.setFlareColor 255/255/255/50 0
ObjectTemplate.setFlareDistFadeScale 1 0
ObjectTemplate.setFlareFadeAngleFactor 0.5 0
REM
REM *** Falre no:2 > LittleDot***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 1
ObjectTemplate.setFlareDestBlend BMOne 1
ObjectTemplate.setFlareTexture ring3.tga 1
ObjectTemplate.setFlareSize 0.5 1
ObjectTemplate.setFlareScale 1 1
ObjectTemplate.setFlareRot 0 1
ObjectTemplate.setFlareColor 255/255/255/200 1
ObjectTemplate.setFlareFadeAngleFactor 0.5 1
REM
REM *** Falre no:3 ***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 2
ObjectTemplate.setFlareDestBlend BMOne 2
ObjectTemplate.setFlareTexture ring4.tga 2
ObjectTemplate.setFlareSize 0.3 2
ObjectTemplate.setFlareScale 1.5 2
ObjectTemplate.setFlareRot 0 2
ObjectTemplate.setFlareColor 255/255/255/155 2
ObjectTemplate.setFlareFadeAngleFactor 0.5 2
REM *** Falre no:4 :Twins***

ObjectTemplate.setFlareSrcBlend BMSourceAlpha 3
ObjectTemplate.setFlareDestBlend BMOne 3
ObjectTemplate.setFlareTexture ring5.tga 3
ObjectTemplate.setFlareSize 2 3
ObjectTemplate.setFlareScale -2 3
ObjectTemplate.setFlareRot 0 3
ObjectTemplate.setFlareColor 255/255/255/50 3
ObjectTemplate.setFlareDistFadeScale 0.5 3
ObjectTemplate.setFlareFadeAngleFactor 0.5 3
REM
REM *** Falre no:5 :Twins***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 4
ObjectTemplate.setFlareDestBlend BMOne 4
ObjectTemplate.setFlareTexture ring5.tga 4
ObjectTemplate.setFlareSize 0 4
ObjectTemplate.setFlareScale -2 4
ObjectTemplate.setFlareRot 1 4
ObjectTemplate.setFlareColor 255/255/255/100 4
ObjectTemplate.setFlareDistFadeScale 1 4
ObjectTemplate.setFlareFadeAngleFactor 0.5 4
REM
REM *** Corona no:0 ***
REM
ObjectTemplate.setCoronaSrcBlend BMSourceAlpha 0
ObjectTemplate.setCoronaDestBlend BMOne 0
ObjectTemplate.setCoronaTexture sunflare7.tga 0
ObjectTemplate.setCoronaSize 2 0
ObjectTemplate.setCoronaScale 1 0
ObjectTemplate.setCoronaRot 0 0
ObjectTemplate.setCoronaColor 255/255/200/225 0
ObjectTemplate.setCoronaFadeAngleFactor 0.5 0
REM
REM *** Corona no:1 - Red aura***
REM
ObjectTemplate.setCoronaSrcBlend BMSourceAlpha 1
ObjectTemplate.setCoronaDestBlend BMOne 1
ObjectTemplate.setCoronaTexture sunflare9.tga 1
ObjectTemplate.setCoronaSize 5 1
ObjectTemplate.setCoronaScale 5 1
ObjectTemplate.setCoronaRot 0 1
ObjectTemplate.setCoronaColor 255/150/0/100 1
ObjectTemplate.setCoronaFadeAngleFactor 0.5 1