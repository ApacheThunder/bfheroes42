subshader "germ_scouthelm_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/ghelmscout_o";
}

subshader "germ_scouthelm_m1_Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	twosided true;
	alphaTestRef 0.7;
	texture "texture/scoutcover04_o";
}

