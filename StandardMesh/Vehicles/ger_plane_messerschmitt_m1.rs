subshader "ger_plane_messerschmitt_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	materialDiffuse 1.0 1.0 1.0;
	materialSpecular 0.809 0.789 0.746;
	materialSpecularPower 10;
	texture "texture/Vehicles/messerschmitt";
}

subshader "ger_plane_messerschmitt_m1_Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/com_glass";
	transparent true;
	depthwrite false;
	envmap true;
}

