subshader "mp_tele_ring_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 0 0 1;
	materialAmbient 0 0 1;
	texture "texture/mp_lightpole";
	transparent true;
	twosided true;
	depthwrite true;
	blendSrc sourceAlpha; 
	blendDest One;
}

