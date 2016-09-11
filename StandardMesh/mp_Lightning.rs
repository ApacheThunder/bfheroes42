subshader "mp_Lightning_Material0" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/Lightning";
	transparent true;
	depthwrite false;
	twosided true;
	blendSrc sourceAlpha; 
	blendDest one;
}

