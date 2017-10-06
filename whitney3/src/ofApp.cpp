#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofNoFill();
    ofBackground(10);
    color.r = 255;
    color.g = 255;
    color.b = 255;
    
    ofColor(color);
    
    time = 0;
    cosTime = 0;
    sinTime = 0;
    
    width = ofGetWidth();
    height = ofGetHeight();
    
    ofSetCircleResolution(150);
    radius = 300;
}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i <25; i++){
        time = ofGetElapsedTimef();
        sinTime = sin(.25*time-i);
        cosTime = cos(time-i);
        radius = 200+(mouseX-30*i)*sin(.4*time);
        
        ofSetLineWidth(30%(i+1));
        
        color.r = 127+127*sinTime;
        color.g = 255-ofMap(mouseY, 0, height, 0, 255);
        color.b = 127+127*cosTime;
        ofSetColor(color);
        ofDrawCircle(width/2, height/2, radius);
        
    }

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
