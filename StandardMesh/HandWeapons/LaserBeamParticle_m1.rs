subshader "LaserBeamParticle_m1_Material0" "StandardMesh/Default"
{
	lighting false;
	materialAmbient 0.658824 0.764706 0.956863;
	materialDiffuse 0.658824 0.764706 0.956863;
	texture "texture/HandWeapons/LaserProjectile";
	transparent true;
	blendSrc sourceAlpha; 
	blendDest one;
	depthWrite false;
	twosided true;
}

subshader "LaserBeamParticle_m1_Material1" "StandardMesh/Default"
{
	lighting false;
	materialAmbient 0.658824 0.764706 0.956863;
	materialDiffuse 0.658824 0.764706 0.956863;
	texture "texture/HandWeapons/LaserProjectile";
	transparent false;
}

