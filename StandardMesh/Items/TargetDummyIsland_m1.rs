subshader "TargetDummyIsland_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/island_grass";
}

subshader "TargetDummyIsland_m1_Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/island_rock";
}

subshader "TargetDummyIsland_m1_Material2" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	twosided true;
	alphaTestRef 0.5;
	texture "texture/UndergrowthAtlas0";
}

subshader "TargetDummyIsland_m1_Material3" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	twosided true;
	alphaTestRef 0.5;
	texture "texture/UndergrowthAtlas0";
}