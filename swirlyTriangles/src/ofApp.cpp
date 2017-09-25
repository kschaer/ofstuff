#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cNumPoints = 60;
    cAngle = (2*pi)/cNumPoints;
    cRadius = 125;
    radiusC = 10;
    cRadius2 = 400;
    
    ofBackground(235);
    colMod=0;
    gradStart.set(255,200,240);
    gradEnd.set(200,230,255);
    
    for (int i = 0; i < 20; i++){
        myMountain[i].setup();
    }
}

//--------------------------------------------------------------
void ofApp::update(){

    for (int c = 0; c < cNumPoints; c++){
        colMod = ofMap(sin(ofGetElapsedTimef()),-1,1,180,255);
        gradStart.set(255,colMod,200+ 3*c);
        gradEnd.set(255-colMod/2,255,colMod);

    }
    
    for (int i = 0; i < 20; i++){
        myMountain[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackgroundGradient(gradStart, gradEnd);
//    ofDrawCircle(ofGetWidth()/2,ofGetHeight()/2, 100*sin(ofGetElapsedTimef()));
    //fBackground(0);
        ofSetLineWidth(2);
    //ofNoFill();
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    //ofBeginShape();
    ofSetColor(255);
    for (int j = 0; j < cNumPoints; j++){
        cRadius = 100 +30*cos(ofGetElapsedTimef()/(j%5));
        radiusC = 10 + 5*(cos(ofGetElapsedTimef()));
        
        ofSetColor(255);
        //ofDrawCircle(cRadius*sin(cAngle*j),cRadius*cos(cAngle*j),radiusC+3);
        
    }
    for (int i = 0; i <cNumPoints; i++){
        

        cRadius = 100 +30*cos(ofGetElapsedTimef()/(i%5));
        cRadius2 = 400 +50*cos(ofGetElapsedTimef()/(i%5));
        radiusC = 10 + 5*(cos(ofGetElapsedTimef()));
        
        
        //ofVertex(cRadius*sin(cAngle*i),cRadius*cos(cAngle*i));
        ofSetColor(255-50*sin(ofGetElapsedTimef()),120+40*(i%4),200);

        ofDrawCircle(cRadius*sin(cAngle*i),cRadius*cos(cAngle*i),radiusC);
        ofDrawCircle(cRadius2*sin(cAngle*i),cRadius2*cos(cAngle*i),radiusC*2);
            }
    

    //ofEndShape();
    
    ofPopMatrix();
    for (int i = 0; i < 20; i++){
        myMountain[i].draw();
    }

    //ofFill();
    //ofSetLineWidth(2.5);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
