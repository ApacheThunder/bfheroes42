subshader "Decal_metal_m1_Material0" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular false;
	materialAmbient 1 1 1;
	materialDiffuse 1 1 1;
	transparent true;
	blendSrc sourceAlpha; 
	blendDest one;
	depthWrite false;
	texture "texture/HandWeapons/LaserImpactEffectDecal";
}

