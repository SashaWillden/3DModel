/* Sasha Willden
  29/11/2019 */

#pragma once

#include "ofMain.h"

class castle
{
public:
	castle();
	//~castle();

	void update();
	void draw();
	void setPosition(float x, float y, float z);
	void texture();

	ofVideoPlayer video;
private:
	float xPos;
	float yPos;
	float zPos;
	ofBoxPrimitive rightcorner1;
	ofBoxPrimitive right1;
	ofBoxPrimitive right2;
	ofBoxPrimitive right3;
	ofBoxPrimitive right4;
	ofBoxPrimitive right5;

	ofBoxPrimitive leftcorner1;
	ofBoxPrimitive left1;
	ofBoxPrimitive left2;
	ofBoxPrimitive left3;
	ofBoxPrimitive left4;
	ofBoxPrimitive left5;

	ofBoxPrimitive leftmiddle1;
	ofBoxPrimitive leftmiddle2;
	ofBoxPrimitive leftmiddle3;

	ofBoxPrimitive rightmiddle1;
	ofBoxPrimitive rightmiddle2;
	ofBoxPrimitive rightmiddle3;

	ofBoxPrimitive castleBase;
	ofCylinderPrimitive castleTop;
	ofConePrimitive castleRoof;

	ofLight light;
	ofMaterial boxMaterial;
	//castle myCastle; <--- to forum users: change name/put myCastle in update and draw

	//Start Ref: Felix Ricketts-Mason - https://learn.gold.ac.uk/mod/forum/discuss.php?d=238187
	ofCylinderPrimitive  trunk;
	ofCylinderPrimitive  branchOne, branchTwo;
	ofSpherePrimitive leavesOne, leavesTwo, leavesThree;

	ofTexture bark;
	ofTexture leaves;

	float treeX, treeY, treeZ;
	//End Ref: Felix Ricketts-Mason - https://learn.gold.ac.uk/mod/forum/discuss.php?d=238187
};