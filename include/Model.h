#ifndef MODEL_H
#define MODEL_H
#include <GL/glut.h>

class Model
{   private:
        float xsize = 0, ysize = 0, zsize = 0, angle = 0;
        float xtran = 0, ytran = 0, ztran = 0;
        float xaxis = 0, yaxis = 0, zaxis = 0;
    public:
        Model();
        void Draw();
        void CreateBox(float x, float y, float z);
        void Rotate(float a, float x, float y, float z);
        void Translate(float x, float y, float z);
        void LoadTexture();
};

#endif // MODEL_H
