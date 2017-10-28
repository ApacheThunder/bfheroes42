subshader "MuzzGun_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular true;
	materialDiffuse 1 1 1;
	materialSpecular 0 0 0;
	materialSpecularPower 12.5;
	texture "texture/HandWeapons/MuzzLaser";
	transparent true;
	blendSrc sourceAlpha; 
	blendDest one;
	twosided true;
	depthWrite false;
	alphaTestRef 0.7;
}