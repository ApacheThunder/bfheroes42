subshader "GridParticle_m1_Material0" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialDiffuse 0.843 0.843 1;
	materialAmbient 0.843 0.843 1;
}

subshader "GridParticle_m1_Material1" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/FLARE5";
	transparent true;
	twosided true;
	depthwrite false;
}

