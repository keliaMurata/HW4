# pragma once 

#include "ofMain.h"

class Spark2
{
public:
	Spark2();
	
	ofVec2f position; 
	float size; 
	ofVec2f velocity;
	ofVec2f birth; 
	ofColor myColor;


	void setup(float anX, float aY);
	void update();
	void draw(int anX, int aY);
	
};