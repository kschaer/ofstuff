#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);
    startRadius = 100;
    numPoints = 50;
    angle = 0;
    time = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < 50; i++){
        for (int j = 0; j <50; j++){
            for (auto pointy : drawnPoints){
                
                time = ofGetElapsedTimef();
                angle = (2*pi)/numPoints;
                startRadius = 50 + 50*sin(time);
                
                ofPoint spinningPoint;
                spinningPoint.set(startRadius*sin(angle*i),startRadius*cos(angle*j));
                ofPoint spinningPoint2;
                spinningPoint2.set(.5*startRadius*sin(angle*i),.5*startRadius*cos(angle*j));
                float dist = (spinningPoint - pointy).length();
                if (dist < mouseX/5){
                    Line lineTemp;
                    lineTemp.a = spinningPoint;
                    lineTemp.b = pointy;
                }
                    
                
            }
            drawnPoints.push_back(ofPoint(i,j));
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableAlphaBlending();
    ofSetColor(30,30,30,30);
    
    for (auto line : lines) {
        ofDrawLine(line.a, line.b);
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
//    for (auto point : drawnPoints){
//        ofPoint mouse;
//        mouse.set(x,y);
//        float dist = (mouse - point).length();
//        if (dist < 30){
//            Line lineTemp;
//            lineTemp.a = mouse;
//            lineTemp.b = point;
//            lines.push_back(lineTemp);
//        }
//    }
//    drawnPoints.push_back(ofPoint(x,y));
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
