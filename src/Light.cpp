#include "Light.h"
#include <iterator>
Light::Light(GLfloat p[4], GLfloat c[4]){
    std::copy(p, p+3, position);
    std::copy(c, c+3, color);
}

void Light::Draw(){
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    GLfloat diff_spec [] = {1, 1, 1, 1};

    glLightfv(GL_LIGHT0, GL_AMBIENT, color);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diff_spec);
    glLightfv(GL_LIGHT0, GL_SPECULAR, diff_spec);
    glLightfv(GL_LIGHT0, GL_POSITION, position);

    glEnable(GL_LIGHT0);
}
