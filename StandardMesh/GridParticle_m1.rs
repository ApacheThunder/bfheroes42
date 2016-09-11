subshader "GridParticle_m1_Material0" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialDiffuse 1 0.843 0.843;
	materialAmbient 1 0.843 0.843;
}

subshader "GridParticle_m1_Material1" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	texture "texture/FLARE0";
	transparent true;
	twosided true;
	depthwrite false;
}

