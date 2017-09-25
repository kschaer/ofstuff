#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    
    // this uses depth information for occlusion
    // rather than always drawing things on top of each other
    ofEnableDepthTest();
    
    // this sets the camera's distance from the object
    cam.setDistance(100);
    ofSetLineWidth(.2);
    ofSetCircleResolution(64);
    bShowHelp = true;
    
   // -----------------
    
    ofNoFill();
    ofBackground(10);
    ofSetColor(245);
    conePoint.set(0,0,0);
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    
    ofPushMatrix();
    for (int i = 0; i < 10; i++){
        for (int j = 0; j <10; j++){
                for (int z = 0; z <10; z++){
                
                
        //ofTranslate(i*15,40,0);
            //ofRotateZ(ofMap(sin(.1*ofGetElapsedTimef()), -1, 1, -90, 90));
            ofPushMatrix();
            //ofRotateZ(ofMap(sin(j+.1*ofGetElapsedTimef()), -1, 1, -90, 90));
            //ofRotateZ(j*2);
            ofRotateZ((i*j+1)*sin(ofGetElapsedTimef()));
            
            //ofTranslate(15*i,15*j, 0);
                    ofNoFill();
                    ofSetColor(255);
            ofDrawBox(0,0,0,20+(i+1)*3,20+(j+1)*3,3*(j+1)*sin(ofGetElapsedTimef()));
            ofPopMatrix();
                    ofPushMatrix();
                    //ofFill();
                    conePoint.set(0,0,0);
                    ofRotateZ(36*(j+0));
                    //ofRotateZ(10*cos(i+ofGetElapsedTimef()));
                    ofRotateX(10*sin(j+ofGetElapsedTimef()));
                    ofTranslate(0,40,0);
                     //ofRotateZ(26*j);
                    ofSetColor(255,0,0);
                    ofDrawCone(conePoint, 8, 12);
                    ofPopMatrix();
                }

            }
    }
    ofPopMatrix();
    cam.end();
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
