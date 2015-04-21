#include "ofApp.h"

//--------------------------------------------------------------
/*
Kelia Murata 
Sparkler simulation using classes. Two seporate classes for the two different kinds ofsparks. 

*/

void ofApp::setup()
{
	ofSetCircleResolution(3); 
	ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update()
{
	Spark birthSpark;
	birthSpark.setup(ofGetMouseX(), ofGetMouseY());
	sparks.push_back(birthSpark); 
	for(int i = 0; i < sparks.size(); i++)
	{
		sparks[i].update();
		float distance = ofDist(sparks[i].birth.x, sparks[i].birth.y, sparks[i].position.x, sparks[i].position.y); // makes spark fade once it moves a distance away from its birth point 
		if(sparks[i].myColor.a == 0)
		{
			sparks.erase(sparks.begin() + i ); //deletes spark after it has disappeared 
			i--; 
		}
	}
	//--------------------------------------------
	//other type of spark setup 
	Spark2 firstSpark;
	firstSpark.setup(ofGetMouseX(), ofGetMouseY());
	sparks2.push_back(firstSpark);
	for(int j = 0; j < sparks2.size(); j++)
	{
		sparks2[j].update();
		float distance2 = ofDist(sparks2[j].birth.x, sparks2[j].birth.y, sparks2[j].position.x, sparks2[j].position.y);
		if(sparks2[j].myColor.a == 0)
		{
			sparks2.erase(sparks2.begin() + j );
			j--; 
		}
	}


}

//--------------------------------------------------------------
void ofApp::draw()
{
	for(int j = 0; j < sparks2.size(); j++)
	{
		sparks2[j].draw(ofGetMouseX(), ofGetMouseY());
	}
	for(int i = 0; i < sparks.size(); i++)
	{
		sparks[i].draw();
	}
}


