#ifndef FINGER_H
#define FINGER_H
#include <GL/glut.h>
#include "Model.h"
class Finger
{
    protected:
        float xpos, ypos, zpos;
        float angle;
        float xsize, ysize, zsize;
        Model f1, f2, f3;
    public:
        Finger();
        void Draw();
        void setAngle(float a);
        void setPosition(float x, float y, float z);
        void setDimensions(float x, float y, float z);
};

class Thumb : public Finger{
    public:
        void Draw();
};
#endif // FINGER_H
