subshader "WaterElala" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	materialAmbient 1 1 1;
	texture "texture/alpha";
	alphaTestRef 1;
	transparent true;
}