subshader "mt_cypress_02_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 0.2 0.2 0.2;
	texture "texture/mt_cypress_01";
}

subshader "mt_cypress_02_m1_Material2" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialDiffuse 0.2 0.2 0.2;
	texture "texture/mt_cypress_lod";
	twosided true;
	transparent false;
	alphaTestRef 0.5;
}