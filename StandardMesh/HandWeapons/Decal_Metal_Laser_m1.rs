subshader "Decal_metal_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular false;
	materialDiffuse 1 1 1;
	blendSrc sourceAlpha; 
	blendDest invsourceAlpha;
	transparent true;
      depthWrite false;
	alphaTestRef 0.5;
	texture "texture/HandWeapons/LaserImpactDecal";
}

