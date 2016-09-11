subshader "mt_leaftree_03_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 0.5 0.5 0.5;
	texture "texture/trunk_mt_leaftree";
}

subshader "mt_leaftree_03_m1_Material1" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialDiffuse 0.05 0.05 0.05;
	twosided true;
	alphaTestRef 0.5;
	texture "texture/mt_leaftree_lod";
}

