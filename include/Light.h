#ifndef LIGHT_H
#define LIGHT_H
#include <GL/glut.h>

class Light
{
    private:
        GLfloat position [4] = {0, 0, 0, 0};
        GLfloat color [4] = {0, 0, 0, 0};
    public:
        Light(GLfloat p[4], GLfloat c[4]);
        void Draw();
};

#endif // LIGHT_H
