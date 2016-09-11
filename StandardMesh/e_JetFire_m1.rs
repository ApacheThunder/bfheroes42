subshader "e_JetFire_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular true;
	materialDiffuse 1 1 1;
	materialSpecular 0.337255 0.337255 0.337255;
	materialSpecularPower 12.5;
	transparent true;
	blendSrc sourceAlpha; 
	blendDest one;
	twosided true;
	alphaTestRef 0.7;
	texture "texture/e_jetfire_I";
}

