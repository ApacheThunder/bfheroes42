subshader "light_post_glow_02_m1_Material0" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/windowglowNoAlpha";
	transparent true;
	blendSrc sourceAlpha; 
	blendDest One;
}

