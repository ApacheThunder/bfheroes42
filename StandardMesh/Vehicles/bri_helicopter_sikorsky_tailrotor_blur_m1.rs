subshader "bri_helicopter_sikorsky_tailrotor_blur_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/Vehicles/bri_helicopter_sikorsky";
}

subshader "bri_helicopter_sikorsky_tailrotor_blur_m1_Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/Vehicles/bri_helicopter_sikorsky_tailrotor";
	transparent true;
	depthwrite false;
}

