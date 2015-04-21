#pragma once 

#include "ofMain.h"

class Spark 
{
public: 
	Spark();

	ofVec2f position;
	ofVec2f velocity; 
	ofVec2f birth; 
	float size;
	float rotate;
	ofColor myColor;

	void setup(float anX, float aY);
	void update();
	void draw();
};
