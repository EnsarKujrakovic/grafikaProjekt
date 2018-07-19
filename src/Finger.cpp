#include "Finger.h"

Finger::Finger(){

}

void Finger::Draw(){
    glPushMatrix();
        f1.CreateBox(xsize, ysize, zsize);
        f1.Translate(xpos, ypos, zpos);
        f1.Rotate(angle, 1, 0, 0);
        f1.Draw();
        f2.CreateBox(xsize, ysize, zsize);
        f2.Translate(0, 1, 0);
        f2.Rotate(angle, 1, 0, 0);
        f2.Draw();
        f3.CreateBox(xsize, ysize, zsize);
        f3.Translate(0, 1, 0);
        f3.Rotate(angle, 1, 0, 0);
        f3.Draw();
    glPopMatrix();
}
void Finger::setDimensions(float x, float y, float z){
    xsize = x;
    ysize = y;
    zsize = z;
}
void Finger::setAngle(float a){
    angle = a;
}
void Finger::setPosition(float x, float y, float z){
    xpos = x;
    ypos = y;
    zpos = z;
}
void Thumb::Draw(){
    glPushMatrix();
        f1.CreateBox(xsize, ysize, zsize);
        f1.Translate(xpos, ypos, zpos);
        f1.Rotate(angle, 0, 1, 0);
        f1.Draw();
        f2.CreateBox(xsize, ysize, zsize);
        f2.Translate(1, 0, 0);
        f2.Rotate(angle, 0, 1, 0);
        f2.Draw();
    glPopMatrix();
}
