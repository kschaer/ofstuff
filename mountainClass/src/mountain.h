//
//  mountain.h
//  mountainClass
//
//  Created by Kaitlin Schaer on 9/8/17.
//
//

#ifndef mountain_h
#define mountain_h

#define _MOUNTAIN
#include "ofMain.h"

class mountain {
public:
    
    void setup();
    void update();
    void draw();
    
    //variables for making the mountains
    ofPoint posR;
    float posLX;
    ofPoint posL;
    ofPoint peak;
    
    float horizon;

    float mountainWidth;
    float mountainHeight;
    
    ofColor color;
    
    mountain();
};


#endif /* mountain_h */
