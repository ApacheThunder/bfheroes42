subshader "Tlight_m1_Material1" "StandardMesh/Default"
{
	lighting false;
	lightingSpecular true;
	materialDiffuse 1 1 1;
	materialSpecular 1 1 1;
	materialSpecularPower 10;
	transparent true;
	blendSrc sourceAlpha; 
	blendDest one;
	depthWrite true;
	texture "texture/tracklight_s";
}

