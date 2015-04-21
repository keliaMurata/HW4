#include "Spark2.h"

	Spark2::Spark2()
	{
		velocity = ofVec2f(ofRandom(-1,1) , ofRandom(-1,1));
		myColor = ofColor(ofRandom(225), ofRandom(225), ofRandom(225), ofRandom(225));

	}

	void Spark2::setup(float anX, float aY)
	{
		position = ofVec2f(anX, aY);
		birth = position; 

	}
	void Spark2::update()
	{
	
		position += velocity;
		float distance2 = ofDist(birth.x,birth.y,position.x, position.y);
		float bright = ofMap(distance2, 0, 500, 255, 0);
		myColor.a = bright;
		
	}

	void Spark2::draw(int anX, int aY)
	{
		ofSetColor(myColor);
		ofPushMatrix();
		ofLine(anX, aY, position.x, position.y);
		ofPopMatrix();
	}
