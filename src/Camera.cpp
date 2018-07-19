#include "Camera.h"

Camera::Camera(){
    //ctor
}

void Camera::Draw(){
    glClearColor(0.0,0.0,0.0,1.0);
    xeye = cameraPositions[i][0];
    yeye = cameraPositions[i][1];
    zeye = cameraPositions[i][2];
   // glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(xeye, yeye, zeye, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}

void Camera::next(){
    if(i >= 6) i = 0;
    else ++i;
}
void Camera::prev(){
    if(i <= 0) i = 6;
    else --i;
}

