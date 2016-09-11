subshader "brit_scouthelm_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/brihelmscout_o";
}

subshader "brit_scouthelm_m1_Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	twosided true;
	alphaTestRef 0.7;
	texture "texture/scoutcover03_o";
}

