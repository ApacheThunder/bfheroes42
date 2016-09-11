subshader "wreck_bri_jeep_willy_gastank_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 0.588 0.588 0.588;
	texture "texture/Vehicles/bri_jeep_willys_w";
}

subshader "wreck_bri_jeep_willy_gastank_m1_Material1" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	texture "texture/alpha";
	alphaTestRef 1.0;
}

