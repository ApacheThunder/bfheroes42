subshader "mp_spark2_red_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 0 0;
	materialAmbient 1 0 0;
	texture "texture/p_gradient";
	transparent true;
	twosided true;
	depthwrite true;
	blendSrc sourceAlpha; 
	blendDest One;
}

