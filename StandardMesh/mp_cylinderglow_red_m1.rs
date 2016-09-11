subshader "mp_cylinderglow_red_m1_Material0" "StandardMesh/Default"
{
	lighting true;
	lightingSpecular true;
	materialDiffuse 1 0 0;
	materialAmbient 1 0 0;
	materialSpecular 1 0 0;
	materialSpecularPower 1;
	texture "texture/mp_lightpole";
	transparent true;
	blendSrc sourceAlpha; 
	blendDest InvDestAlpha;
}

