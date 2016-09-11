subshader "ger_plane_propBlur_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1.0 1.0 1.0;
	texture "texture/Vehicles/messerschmitt";
}

subshader "ger_plane_propBlur_m1_Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	transparent true;
	twosided true;
	depthwrite false;
	texture "texture/Vehicles/bri_plane_spitfire_propeller";
}

