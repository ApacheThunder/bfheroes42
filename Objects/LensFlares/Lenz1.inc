rem
rem *** "TSun" of primitive LensFlare ***
rem
ObjectTemplate.create LensFlare TSun1
ObjectTemplate.setLensFlareCount 16
rem ObjectTemplate.setBackFlareCount 3
ObjectTemplate.setCoronaCount 4
ObjectTemplate.initLensFlares
ObjectTemplate.setVisibilityAngleDeg 360
ObjectTemplate.setOcclusionQuadWidthHeight 200 200
REM
REM *** Falre no:0 > BlurryRainbowRING***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 0
ObjectTemplate.setFlareDestBlend BMOne 0
ObjectTemplate.setFlareTexture ring0.tga 0
ObjectTemplate.setFlareSize 16 0
ObjectTemplate.setFlareScale 8 0
ObjectTemplate.setFlareRot 1.5 0
ObjectTemplate.setFlareColor 255/255/255/255 0
ObjectTemplate.setFlareFade 0.7 0
REM
REM *** Falre no:1 ***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 1
ObjectTemplate.setFlareDestBlend BMOne 1
ObjectTemplate.setFlareTexture ring1.tga 1
ObjectTemplate.setFlareSize 7 1
ObjectTemplate.setFlareScale 10 1
ObjectTemplate.setFlareRot 0 1
ObjectTemplate.setFlareColor 255/255/255/100 1
ObjectTemplate.setFlareFade 0.15 1
REM
REM *** Falre no:2 ***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 2
ObjectTemplate.setFlareDestBlend BMOne 2
ObjectTemplate.setFlareTexture ring2.tga 2
ObjectTemplate.setFlareSize 5 2
objectTemplate.setFlareScale 7.5 2
ObjectTemplate.setFlareRot 0 2
ObjectTemplate.setFlareColor 255/255/255/50 2
ObjectTemplate.setFlareDistFadeScale 1 2
REM
REM *** Falre no:3 > LittleDot***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 3
ObjectTemplate.setFlareDestBlend BMOne 3
ObjectTemplate.setFlareTexture ring3.tga 3
ObjectTemplate.setFlareSize 0.5 3
ObjectTemplate.setFlareScale 1 3
ObjectTemplate.setFlareRot 0 3
ObjectTemplate.setFlareColor 255/255/255/200 3
REM
REM *** Falre no:4 ***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 4
ObjectTemplate.setFlareDestBlend BMOne 4
ObjectTemplate.setFlareTexture ring4.tga 4
ObjectTemplate.setFlareSize 2 4
ObjectTemplate.setFlareScale 7 4
ObjectTemplate.setFlareRot 0 4
ObjectTemplate.setFlareColor 255/255/255/155 4
REM
REM *** Falre no:5 :Twins***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 5
ObjectTemplate.setFlareDestBlend BMOne 5
ObjectTemplate.setFlareTexture ring5.tga 5
ObjectTemplate.setFlareSize 2 5
ObjectTemplate.setFlareScale 1 5
ObjectTemplate.setFlareRot 0 5
ObjectTemplate.setFlareColor 255/255/255/50 5
ObjectTemplate.setFlareDistFadeScale 0.5 5
REM
REM *** Falre no:6 :Twins***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 6
ObjectTemplate.setFlareDestBlend BMOne 6
ObjectTemplate.setFlareTexture ring5.tga 6
ObjectTemplate.setFlareSize 0 6
ObjectTemplate.setFlareScale -3 6
ObjectTemplate.setFlareRot 1 6
ObjectTemplate.setFlareColor 255/255/255/100 6
ObjectTemplate.setFlareDistFadeScale 1 6
REM
REM *** Falre no:7 > littleDotty1 big***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 7
ObjectTemplate.setFlareDestBlend BMOne 7
ObjectTemplate.setFlareTexture ring6.tga 7
ObjectTemplate.setFlareSize 0.2 7
ObjectTemplate.setFlareScale 0.4 7
ObjectTemplate.setFlareRot 0 7
ObjectTemplate.setFlareColor 255/255/255/150 7
REM
REM *** Falre no:8 > littledotty2 smaller***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 8
ObjectTemplate.setFlareDestBlend BMOne 8
ObjectTemplate.setFlareTexture ring6.tga 8
ObjectTemplate.setFlareSize 0.1 8
ObjectTemplate.setFlareScale 0.3 8
ObjectTemplate.setFlareRot 0 8
ObjectTemplate.setFlareColor 255/255/255/200 8
REM
REM *** Falre no:9 ***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 9
ObjectTemplate.setFlareDestBlend BMOne 9
ObjectTemplate.setFlareTexture ring5.tga 9
ObjectTemplate.setFlareSize 0.5 9
ObjectTemplate.setFlareScale 5 9
ObjectTemplate.setFlareRot 0 9
ObjectTemplate.setFlareColor 255/255/255/55 9
ObjectTemplate.setFlareDistFadeScale 0.4 9
REM
REM *** Falre no:10 ***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 10
ObjectTemplate.setFlareDestBlend BMOne 10
ObjectTemplate.setFlareTexture ring4.tga 10
ObjectTemplate.setFlareSize 0.75 10
ObjectTemplate.setFlareScale 1 10
ObjectTemplate.setFlareRot 0 10
ObjectTemplate.setFlareColor 255/255/255/100 10
REM
REM *** Falre no:11 ***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 11
ObjectTemplate.setFlareDestBlend BMOne 11
ObjectTemplate.setFlareTexture ring7.tga 11
ObjectTemplate.setFlareSize 1.5 11
ObjectTemplate.setFlareScale 2 11
ObjectTemplate.setFlareRot 0 11
ObjectTemplate.setFlareColor 255/255/255/50 11
REM
REM *** Falre no:12 ***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 12
ObjectTemplate.setFlareDestBlend BMOne 12
ObjectTemplate.setFlareTexture ring8.tga 12
ObjectTemplate.setFlareSize 0.4 12
ObjectTemplate.setFlareScale 0.8 12
ObjectTemplate.setFlareRot 0 12
ObjectTemplate.setFlareColor 255/255/255/40 12
REM
REM *** Falre no:13 > BLANK_backflare***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 13
ObjectTemplate.setFlareDestBlend BMOne 13
ObjectTemplate.setFlareTexture zero.tga 13
ObjectTemplate.setFlareSize 0 13
ObjectTemplate.setFlareScale 0 13
ObjectTemplate.setFlareRot 0 13
ObjectTemplate.setFlareColor 0/0/0/255 13
REM
REM *** Falre no:14 > BLANK_backflare***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 14
ObjectTemplate.setFlareDestBlend BMOne 14
ObjectTemplate.setFlareTexture zero.tga 14
ObjectTemplate.setFlareSize 0 14
ObjectTemplate.setFlareScale 0 14
ObjectTemplate.setFlareRot 0 14
ObjectTemplate.setFlareColor 0/0/0/255 14
REM
REM *** Falre no:15 > backflare***
REM
ObjectTemplate.setFlareSrcBlend BMSourceAlpha 15
ObjectTemplate.setFlareDestBlend BMOne 15
ObjectTemplate.setFlareTexture ring2.tga 15
ObjectTemplate.setFlareSize 1 15
ObjectTemplate.setFlareScale 7 15
ObjectTemplate.setFlareRot 0 15
ObjectTemplate.setFlareColor 255/255/255/30 15
REM
REM *** Corona no:0 ***
REM
ObjectTemplate.setCoronaSrcBlend BMSourceAlpha 0
ObjectTemplate.setCoronaDestBlend BMOne 0
ObjectTemplate.setCoronaTexture sunflare7.tga 0
ObjectTemplate.setCoronaSize 5 0
ObjectTemplate.setCoronaScale 0 0
ObjectTemplate.setCoronaRot 0 0
ObjectTemplate.setCoronaColor 255/255/255/225 0
REM
REM *** Corona no:1 ***
REM
ObjectTemplate.setCoronaSrcBlend BMSourceAlpha 1
ObjectTemplate.setCoronaDestBlend BMOne 1
ObjectTemplate.setCoronaTexture sunflare8.tga 1
ObjectTemplate.setCoronaSize 1 1
ObjectTemplate.setCoronaScale 3 1
ObjectTemplate.setCoronaRot -0.5 1
ObjectTemplate.setCoronaColor 255/255/255/50 1
REM
REM *** Corona no:2 ***
REM
ObjectTemplate.setCoronaSrcBlend BMSourceAlpha 2
ObjectTemplate.setCoronaDestBlend BMOne 2
ObjectTemplate.setCoronaTexture sunflare6.tga 2
ObjectTemplate.setCoronaSize 5 2
ObjectTemplate.setCoronaScale 5 2
ObjectTemplate.setCoronaRot 0 2
ObjectTemplate.setCoronaColor 255/200/200/75 2
REM
REM *** Corona no:3 - Red aura***
REM
ObjectTemplate.setCoronaSrcBlend BMSourceAlpha 3
ObjectTemplate.setCoronaDestBlend BMOne 3
ObjectTemplate.setCoronaTexture sunflare9.tga 3
ObjectTemplate.setCoronaSize 10 3
ObjectTemplate.setCoronaScale 20 3
ObjectTemplate.setCoronaRot 0 3
ObjectTemplate.setCoronaColor 200/200/0/50 3