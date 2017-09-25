#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofBackground(245, 245, 255);
    usecamera= false;
    
    ofMesh mesh;
    mesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
}

//--------------------------------------------------------------
void ofApp::update(){
    if(!usecamera){
        ofVec3f sumOfAllPoints(0,0,0);
        for(unsigned int i = 0; i < points.size(); i++){
            points[i].z -= 4;
            sumOfAllPoints += points[i];
        }
        center = sumOfAllPoints / points.size();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    if(usecamera){
        camera.begin();
    }
    
    ofSetColor(10);
    
    for( int i = 1; i < points.size(); i++){
        ofVec3f thisPoint = points[i-1];
        ofVec3f nextPoint = points[i];
        
        ofVec3f direction = (nextPoint - thisPoint);
        
        float distance = direction.length();
        
        ofVec3f unitDirection = direction.getNormalized();
        ofVec3f toTheLeft 
        
        //squareMesh.addVertex(<#const ofVec3f &v#>)
        
    }
    

    if(usecamera){
        camera.end();
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
