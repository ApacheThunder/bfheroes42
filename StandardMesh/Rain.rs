subshader "tracklight_m1_Material0" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular true;
	materialDiffuse 1 1 1;
	materialSpecular 0 0 0;
	materialSpecularPower 12.5;
	transparent true;
	blendSrc sourceAlpha;
	blendDest one;
	twosided true;
	texture "texture/e_Rain";
}