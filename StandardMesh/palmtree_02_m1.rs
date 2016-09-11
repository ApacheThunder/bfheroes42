subshader "palmtree_02_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/palmtree";
}

subshader "palmtree_02_m1_Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/palmtreeleaf";
	alphaTestRef 0.45;
}

