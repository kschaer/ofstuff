#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    OF_RECTMODE_CENTER;
    bouncy = 0;
    for (int i = 0; i<100; i++){
        for (int j = 0; j<100; j++){
            position[i][j]= ofPoint(i*10,j*10);
            posX[i]=0;
            posY[j]=0;
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    glPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    for (int i = 0; i<100; i++){
        for (int j = 0; j<100; j++){
            bouncy = .2*sin(4*ofGetElapsedTimef());
            ofSetColor(255-i, 255-j, 255-i);
            //position[i][j] = ofPoint(i*(ofGetWidth()/100),sin(ofGetElapsedTimef())*i);
            //ofDrawRectangle(position[i],position[j],2,2);
            //ofDrawRectangle(position[i][j], 10, 10);
            posX[i]=.01*mouseX*i;
            posY[j]= j*5*bouncy;
            ofDrawRectangle(posX[i], posY[j], 2, 2);
            
        }
    }
    glPopMatrix();
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
