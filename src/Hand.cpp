#include "Hand.h"

Hand::Hand(){

}
void Hand::setAngle(float a){
    for(int i = 0; i < 4; ++i){
        fingers[i].setAngle(a);
    }
}
void Hand::Draw(){
    glPushMatrix();
        palm.CreateBox(xsize, ysize, zsize);
        palm.Translate(-2, -2, -1);
        palm.Draw();
    glPopMatrix();
    glPushMatrix();
        thumb.setPosition(2, -1, -1);
        thumb.setDimensions(1, 1, 1);
        thumb.Draw();
    glPopMatrix();
    for(int i = 0; i < 4; ++i){
    glPushMatrix();
        fingers[i].setPosition(i-2+i*0.1, 2, -1);
        fingers[i].setDimensions(1, 1, 1);
        fingers[i].Draw();
    glPopMatrix();
    }

}
void Hand::setDimensions(float x, float y, float z){
    xsize = x;
    ysize = y;
    zsize = z;
}
