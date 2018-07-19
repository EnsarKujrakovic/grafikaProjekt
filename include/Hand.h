#ifndef HAND_H
#define HAND_H
#include <GL/glut.h>
#include "Finger.h"

class Hand
{
    private:
        float xsize = 0, ysize = 0, zsize = 0;
        Model palm;
    public:
        Thumb thumb;
        Finger fingers [4];
        Hand();
        void Draw();
        void setAngle(float a);
        void setDimensions(float x, float y, float z);
};

#endif // HAND_H
