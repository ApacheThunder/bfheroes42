subshader "bri_jeep_willys_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular true;
	materialDiffuse 1.0 1.0 1.0;
	materialSpecular 0.809 0.789 0.746;
	materialSpecularPower 10.0;
	texture "texture/Vehicles/bri_jeep_willys";
}

subshader "bri_jeep_willys_m1_Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1.0 1.0 1.0;
	transparent true;
	twosided true;
	envmap true;
	texture "texture/com_glass";
}

