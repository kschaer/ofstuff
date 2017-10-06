#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetColor(230,230,255,255);
    ofSetBackgroundColor(245);
    
    numPoints = 100;
    radius = 200;
    angle = 0;
    
    time= ofGetElapsedTimef();
    cosTime = cos(time);
    sinTime = sin(time);
    startTime = 0;
    endTime = 0;
    duration = endTime-startTime;
    ofNoFill();
    ofSetLineWidth(1.5);
    
    mappedMouseX = 0;
    mappedMouseY = 0;
    ofSetCircleResolution(100);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    time = ofGetElapsedTimef();
    sinTime = sin(.1*time);
    cosTime = cos(time);
    for (int j = 0; j < 12; j++){
        
    
    ofRotate(ofMap(sinTime-30*j,-1,1,-360,360));
        //    ofRotate(ofMap(sinTime-30*j,-1,1,-360,360));

        //cout << sinTime-30*j << endl;
    for (int i = 0; i < numPoints; i++){
        
        mappedMouseX = ofMap(mouseX, 0, ofGetWidth(), 0,1);
        mappedMouseY = ofMap(mouseY, 0, ofGetHeight(), 0,1);

        
        
        time = ofGetElapsedTimef();
        sinTime = sin(.02*time);
        cosTime = cos(.1*time);
        radius = 5*i;
        angle = (2*pi)/numPoints;
        
        ofSetColor(ofMap(sin(.1*time-.1*i),-1,1,200,230));
        
        ofDrawCircle(radius*sin(angle*i),radius*cos(mappedMouseX*angle*i), int((ofMap(cosTime,-1,1,0,mouseY)))%(i+1));
        
        ofSetColor(ofMap(sin(.1*time-.1*i),-1,1,48,100));
        ofDrawCircle(radius*cos(angle*i),radius*sin(mappedMouseY*angle*i), int((ofMap(cosTime,-1,1,0,mouseX)))%(i+1));
    }
        }
    ofPopMatrix();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == OF_KEY_DOWN){
        ofNoFill();
    } else if (key == OF_KEY_UP){
        ofFill();
    }
    
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
