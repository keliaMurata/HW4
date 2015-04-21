#include "spark.h"

	Spark::Spark() //constructor 
	{
		velocity = ofVec2f(ofRandom(-3,3),ofRandom(-3,3));
		size = ofRandom(5,15);
		myColor = ofColor(ofRandom(200),ofRandom(200), ofRandom(255), 100);
		rotate = 0;
	}

	void Spark::setup(float anX, float aY)
	{
		position = ofVec2f(anX, aY);
		birth = position; //remember where you were born 
	}

	void Spark::update()
	{
		position += velocity;
		rotate += abs(velocity.x);
		float distance = ofDist(birth.x,birth.y,position.x, position.y);
		float bright = ofMap(distance, 0, 300, 255, 0);  // fade out alpha channel as it moves away from birth point 
		myColor.a = bright;
	}

	void Spark::draw()
	{
		ofSetColor(myColor);
		ofPushMatrix();
		ofTranslate(position); //be sure to translate rotation point first 
		ofRotate(rotate);
		ofCircle(0,0, size);
		ofPopMatrix();
	}