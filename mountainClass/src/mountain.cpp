//
//  mountain.cpp
//  mountainClass
//
//  Created by Kaitlin Schaer on 9/8/17.
//
//



#include "mountain.h"
mountain::mountain(){
    
}

void mountain::setup(){
    
    //
    mountainWidth = 2;
    horizon = ofGetHeight()/2;
    posLX = 2;
    mountainHeight = 0;
    
    //points for left,right,peak
    posL.set(posLX, horizon);
    posR.set(posLX+mountainWidth,horizon);
    peak.set(posLX+mountainWidth/2,horizon-mountainHeight);
    
    //color
    color.set(ofRandom(255));
}


void mountain::update(){
    for (int i=0;i<20;i++){
        mountainWidth = ofGetMouseX();
        posLX = sin(i+ofGetElapsedTimef());
        mountainHeight = 5*cos(i+ofGetElapsedTimef());
        posL.set(posLX,horizon);
        posR.set(posLX+mountainWidth,horizon);
        peak.set(posLX+mountainWidth/2,horizon-mountainHeight);
        color.set(255, i*12, 255-i*12);
    }
    

}

void mountain::draw(){
    ofDrawTriangle(posL, posR, peak);
}
