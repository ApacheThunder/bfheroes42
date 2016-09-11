subshader "Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	materialAmbient 1 1 1;
	texture "texture/car/Lancer_AlphaGrill";
	envmap true;
	transparent true;
}

subshader "Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	materialAmbient 1 1 1;
	texture "texture/car/Generic_Hoodpin";
	alphaTestRef 0.5;
}

subshader "Material2" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular true;
	materialDiffuse 0.3 0.3 0.3;
	materialAmbient 1.5 1.5 1.5;
	materialSpecular 1 1 1;
	materialSpecularPower 10;
	texture "texture/car/BrokenWindow_1";
	envmap true;
	transparent true;
	blendSrc sourceAlpha;
	blendDest destAlpha;
	twosided true;
	depthwrite false;
}

subshader "Material3" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	materialAmbient 1 1 1;
	texture "texture/car/Generic_Chassis";
}

subshader "Material4" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	materialAmbient 1 1 1;
	texture "texture/car/Lancer_Colors_Chrome";
	transparent false;
	blendSrc sourceAlpha;
	blendDest destAlpha;
	envmap true;
}

subshader "Material5" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	materialAmbient 1 1 1;
	texture "texture/car/Generic_Assessories";
}

subshader "Material6" "StandardMesh/Default"
{
	dirtmap true;
	lighting true;
	lightingSpecular true;
	materialDiffuse 1 1 1;
	materialAmbient 1 1 1;
	materialSpecular 1 1 1;
	materialSpecularPower 7;
	texture "texture/car/Astra_L1";
	transparent false;
	envmap true;
}

subshader "Material7" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	materialAmbient 1 1 1;
	texture "texture/car/Lancer_Colors";
}