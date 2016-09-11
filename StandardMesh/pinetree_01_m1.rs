subshader "pinetree_01_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/trunk_pinetree_01";
}

subshader "pinetree_01_m1_Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/branch_pinetree_01";
	alphaTestRef 0.5;
	transparent false;
}

