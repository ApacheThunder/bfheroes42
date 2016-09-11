subshader "bri_helicopter_sikorsky_mainrotor_blur_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1.0 1.0 1.0;
	texture "texture/Vehicles/bri_helicopter_sikorsky";
}

subshader "bri_helicopter_sikorsky_mainrotor_blur_m1_Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1.0 1.0 1.0;
	transparent true;
	twosided true;
	depthwrite false;
	texture "texture/Vehicles/bri_helicopter_sikorsky_rotor";
}

subshader "bri_helicopter_sikorsky_mainrotor_blur_m1_Material2" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1.0 1.0 1.0;
	texture "texture/Vehicles/bri_helicopter_sikorsky";
}

