subshader "decal_scorch01_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 0.588 0.588 0.588;
	texture "texture/Decal_scorch01_c";
	blendSrc sourceAlpha; 
	blendDest invsourceAlpha;
	transparent true;
	depthWrite false;
}

