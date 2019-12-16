/* Sasha Willden
  29/11/2019 */

#include "castle.h"

castle::castle()
{

	castleTop.setParent(castleBase);
	rightcorner1.setParent(castleTop);
	right1.setParent(castleTop);
	right2.setParent(castleTop);
	right3.setParent(castleTop);
	right4.setParent(castleTop);
	right5.setParent(castleTop);

	leftcorner1.setParent(castleTop);
	left1.setParent(castleTop);
	left2.setParent(castleTop);
	left3.setParent(castleTop);
	left4.setParent(castleTop);
	left5.setParent(castleTop);

	leftmiddle1.setParent(castleTop);
	leftmiddle2.setParent(castleTop);
	leftmiddle3.setParent(castleTop);

	rightmiddle1.setParent(castleTop);
	rightmiddle2.setParent(castleTop);
	rightmiddle3.setParent(castleTop);

	castleRoof.setParent(castleTop);

	castleTop.setPosition(0, -400, 0);
	castleTop.set(100, 0);

	castleRoof.setPosition(0, -140, 0);

	castleTop.setHeight(200);
	castleRoof.setHeight(0);
	castleRoof.set(120, 120, 30, 0);

	rightcorner1.setPosition(158, 77, 158);
	rightcorner1.setWidth(35);
	rightcorner1.setDepth(35);
	rightcorner1.setHeight(50);

	right1.setPosition(158, 77, 78);
	right1.setWidth(35);
	right1.setDepth(35);
	right1.setHeight(50);

	right2.setPosition(158, 77, 0);
	right2.setWidth(35);
	right2.setDepth(35);
	right2.setHeight(50);

	right3.setPosition(158, 77, -78);
	right3.setWidth(35);
	right3.setDepth(35);
	right3.setHeight(50);

	right4.setPosition(158, 77, -78);
	right4.setWidth(35);
	right4.setDepth(35);
	right4.setHeight(50);

	right5.setPosition(158, 77, -158);
	right5.setWidth(35);
	right5.setDepth(35);
	right5.setHeight(50);


	leftcorner1.setPosition(-158, 77, 158);
	leftcorner1.setWidth(35);
	leftcorner1.setDepth(35);
	leftcorner1.setHeight(50);

	left1.setPosition(-158, 77, 78);
	left1.setWidth(35);
	left1.setDepth(35);
	left1.setHeight(50);

	left2.setPosition(-158, 77, 0);
	left2.setWidth(35);
	left2.setDepth(35);
	left2.setHeight(50);

	left3.setPosition(-158, 77, -78);
	left3.setWidth(35);
	left3.setDepth(35);
	left3.setHeight(50);

	left4.setPosition(-158, 77, -78);
	left4.setWidth(35);
	left4.setDepth(35);
	left4.setHeight(50);

	left5.setPosition(-158, 77, -158);
	left5.setWidth(35);
	left5.setDepth(35);
	left5.setHeight(50);

	leftmiddle1.setPosition(77, 77, -158);
	leftmiddle1.setWidth(35);
	leftmiddle1.setDepth(35);
	leftmiddle1.setHeight(50);

	leftmiddle2.setPosition(0, 77, -158);
	leftmiddle2.setWidth(35);
	leftmiddle2.setDepth(35);
	leftmiddle2.setHeight(50);

	leftmiddle3.setPosition(-77, 77, -158);
	leftmiddle3.setWidth(35);
	leftmiddle3.setDepth(35);
	leftmiddle3.setHeight(50);

	rightmiddle1.setPosition(77, 77, 158);
	rightmiddle1.setWidth(35);
	rightmiddle1.setDepth(35);
	rightmiddle1.setHeight(50);

	rightmiddle2.setPosition(0, 77, 158);
	rightmiddle2.setWidth(35);
	rightmiddle2.setDepth(35);
	rightmiddle2.setHeight(50);

	rightmiddle3.setPosition(-77, 77, 158);
	rightmiddle3.setWidth(35);
	rightmiddle3.setDepth(35);
	rightmiddle3.setHeight(50);


	castleBase.setWidth(350);
	castleBase.setDepth(350);
	castleBase.setHeight(600);



	ofBackground(0);

	ofDisableArbTex();
	ofEnableDepthTest();

	ofEnableDepthTest();
	ofEnableLighting();
	light.setPointLight();
	light.setDiffuseColor(ofFloatColor(1.0, 1.0, 1.0));
	light.setPosition(ofGetWidth()*.5,
		ofGetHeight()*.5, 300);
	light.enable();
	ofEnableNormalizedTexCoords();
	castleBase.setPosition(ofGetWidth() / 2, ofGetHeight(), 0);

	video.load("movies/fireworks.mp4");
	video.play();

	//Start Ref: Felix Ricketts-Mason - https://learn.gold.ac.uk/mod/forum/discuss.php?d=238187
	ofEnableDepthTest();
	ofEnableNormalizedTexCoords();

	ofDisableArbTex();
	ofLoadImage(bark, "bark.jpg");
	ofLoadImage(leaves, "leaves.jpg");

	trunk.set(30, 900);

	branchOne.set(20, 135);
	branchTwo.set(20, 105);

	leavesOne.setRadius(160);
	leavesTwo.setRadius(130);
	leavesThree.setRadius(185);
	//End Ref: Felix Ricketts-Mason - https://learn.gold.ac.uk/mod/forum/discuss.php?d=238187
}

void castle::setPosition(float x, float y, float z)
{
	if (x < 5000 && x > 0) xPos = x;

	yPos = y;
	zPos = z;

	castleBase.setPosition(xPos, yPos, zPos);
	//End Ref: Felix Ricketts-Mason - https://learn.gold.ac.uk/mod/forum/discuss.php?d=238187
	treeX = x;
	treeY = y;
	treeZ = z;
	//End Ref: Felix Ricketts-Mason - https://learn.gold.ac.uk/mod/forum/discuss.php?d=238187
}

void castle::update()
{
	castleBase.rotateDeg(1, 0, 1, 0);
	video.update();
}

void castle::draw()
{
	video.draw(0, 0, 1100, 400);

	boxMaterial.begin();
	castleTop.draw();

	castleRoof.draw();

	rightcorner1.draw();
	right1.draw();
	right2.draw();
	right3.draw();
	right4.draw();
	right5.draw();

	leftcorner1.draw();
	left1.draw();
	left2.draw();
	left3.draw();
	left4.draw();
	left5.draw();

	leftmiddle1.draw();
	leftmiddle2.draw();
	leftmiddle3.draw();

	rightmiddle1.draw();
	rightmiddle2.draw();
	rightmiddle3.draw();

	castleBase.draw();
	//Start Ref: Felix Ricketts-Mason - https://learn.gold.ac.uk/mod/forum/discuss.php?d=238187

	trunk.setPosition(150, 600, 0);

	leavesOne.setPosition(-100, -300, 75);
	leavesTwo.setPosition(100, -300, 75);
	leavesThree.setPosition(0, -300, -75);
	branchOne.setPosition(treeX + 5, treeY - 145, treeZ);
	branchTwo.setPosition(treeX - 5, treeY - 105, treeZ);
	leavesOne.setParent(trunk);
	leavesTwo.setParent(trunk);
	leavesThree.setParent(trunk);

	bark.bind();
	trunk.draw();
	bark.unbind();


	leaves.bind();
	leavesOne.draw();
	leavesTwo.draw();
	leavesThree.draw();
	leaves.unbind();
	//End Ref: Felix Ricketts-Mason - https://learn.gold.ac.uk/mod/forum/discuss.php?d=238187
	boxMaterial.end();
}

	//Start Ref: Felix Ricketts-Mason - https://learn.gold.ac.uk/mod/forum/discuss.php?d=238187
void castle::texture() {
	if (ofRandom(0, 2) > 1) {
		leaves.clear();
		ofLoadImage(leaves, "leaves.jpg");
	}
	else {
		leaves.clear();
		ofLoadImage(leaves, "leavesB.jpg");
	}

}
	//End Ref: Felix Ricketts-Mason - https://learn.gold.ac.uk/mod/forum/discuss.php?d=238187