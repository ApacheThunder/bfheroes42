subshader "Laptop_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/HandWeapons/laptop_m1";
}

subshader "Laptop_m1_Material1" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/HandWeapons/LaptopScreen";
	envmap true;
	transparent false;
	alphaTestRef 0;
}

