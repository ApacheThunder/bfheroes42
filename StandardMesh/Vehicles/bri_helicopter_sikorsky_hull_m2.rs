subshader "bri_helicopter_sikorsky_hull_m2_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/Vehicles/bri_helicopter_sikorsky";
}

subshader "bri_helicopter_sikorsky_hull_m2_Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/Vehicles/bri_helicopter_sikorsky_glass";
	transparent true;
	depthwrite false;
	twosided true;
}

