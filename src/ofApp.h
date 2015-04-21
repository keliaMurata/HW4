#pragma once

#include "ofMain.h"
#include "spark.h"
#include "Spark2.h"

class ofApp : public ofBaseApp
{

	public:
		void setup();
		void update();
		void draw();
		
		vector <Spark> sparks; 
		vector <Spark2> sparks2; 
};
