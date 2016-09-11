subshader "ger_plane_w_wheel_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/Vehicles/messerschmitt_w";
}

subshader "ger_plane_w_wheel_m1_Material1" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	transperant false;
	alphaTestRef 1;
}

