#ifndef CAMERA_H
#define CAMERA_H
#include <GL/glut.h>
static int i = 0;
class Camera
{
    private:
        float xeye, yeye, zeye;
        float cameraPositions [9][3] =
        {{0, 0, 10},{10, 0, 0},{-10, 0, 0},
        {0, 0, -10},{6, 6, 5},{6, 0, 6},
        {-6, 6, 5}
        };
    public:
        Camera();
        void next();
        void prev();
        void Draw();
};

#endif // CAMERA_H
