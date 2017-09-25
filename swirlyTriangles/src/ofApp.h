#pragma once

#include "ofMain.h"
#include "circle.h"
#define NUM 10

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    //circle myCircles[100];
    mountain myMountain[20];
    
    
    float cRadius;
    int cNumPoints;
    float cAngle;
    float radiusC;
    float cRadius2;
    
    ofColor gradStart;
    ofColor gradEnd;
    float colMod;
};
