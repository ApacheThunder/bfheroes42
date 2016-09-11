subshader "Material0" "StandardMesh/Default"
{
	lighting true;
	materialAmbient 1 1 1;
	materialDiffuse 1 1 1;
	texture "texture/car/BrakeDisc";
	alphaTestRef 0.5;
}
subshader "Material1" "StandardMesh/Default"
{
	lighting true;
	materialAmbient 1 1 1;
	materialDiffuse 1 1 1;
	texture "texture/car/Nav";
	twosided true;
}
subshader "Material2" "StandardMesh/Default"
{
	lighting true;
	materialAmbient 1 1 1;
	materialDiffuse 1 1 1;
	texture "texture/car/TarmacTread";
}
subshader "Material3" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular true;
	materialAmbient 1 1 1;
	materialDiffuse 1 1 1;
	materialSpecular 1 1 1;
	materialSpecularPower 3;
	texture "texture/car/WheelGrey";
	transparent false;
	envmap true;
	twosided true;
}