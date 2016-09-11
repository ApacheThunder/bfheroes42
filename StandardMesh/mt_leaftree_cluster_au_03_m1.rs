subshader "mt_leaftree_cluster_au_03_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 0.588 0.588 0.588;
	texture "texture/trunk_mt_leaftree";
}

subshader "mt_leaftree_cluster_au_03_m1_Material1" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular true;
	materialDiffuse 0.1 0.1 0.1;
	materialSpecular 0.05 0.05 0.05;
	materialSpecularPower 10;
	twosided true;
	alphaTestRef 0.5;
	texture "texture/mt_leaftree_au_lod";
}

