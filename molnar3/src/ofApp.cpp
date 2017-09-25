#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(245, 245, 245);
    ofSetColor(10);
    squareSize = 120;
    numSquares = 6;
    numZ = 10;
    jitter = 0;
    jitter2 = 0;
    float jitter3 = 0;
    float jitter4 = 0;
    squareOffset = 0;
    //ofNoFill();
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    ofTranslate(100,100);
    for (int i = 0; i<61; i++){
        for (int j = 0; j<40; j++)
            ofDrawCircle(10+13*i, 10+20*j, 3);
    }
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(200,200);
    ofRotate(4);
    for (int i = 0; i<60; i++){
        for (int j = 0; j<30; j++)
            ofDrawCircle(10+13*i, 10+20*j, 3);
    }
    
    
    ofPopMatrix();
    ofPushMatrix();
    ofTranslate(10,200);
    ofRotate(-2);
    for (int i = 0; i<40; i++){
        for (int j = 0; j<30; j++)
            ofDrawCircle(10+13*i, 10+20*j, 3);
    }
    
    
    ofPopMatrix();
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
