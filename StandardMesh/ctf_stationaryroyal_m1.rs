subshader "ctf_stationaryroyal_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 0.5 0.5 0.5;
	alphaTestRef 0.45;
	texture "texture/ctf_royalflag";
}

subshader "ctf_stationaryroyal_m1_Material1" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 0.5 0.5 0.5;
	twosided true;
	alphaTestRef 0.45;
	texture "texture/ctf_royalflag";
}

