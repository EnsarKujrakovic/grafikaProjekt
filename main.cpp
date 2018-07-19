#include <iostream>
#include <GL/glut.h>
#include "Hand.h"
#include "Camera.h"

Hand h;
Camera c;
int angle0 = 0, angle1 = 0, angle2 = 0, angle3 = 0, anglet = 0;
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.5, 2.5, -2.5, 2.5, -1.0, 1.0);

    glMatrixMode(GL_MODELVIEW);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
    c.Draw();

    h.setDimensions(4.3, 4, 1);
    h.Draw();
    glutSwapBuffers();
}

void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
   gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
   glTranslatef (0.0, 0.0, -5.0);
}

void kbd(unsigned char key, int x, int y){
    switch(key){
        case 27:
            exit(0);
            break;
        case 'a':
            if(angle0 > 85) angle0 = 85;
            h.fingers[0].setAngle(angle0 = angle0 + 5);
            break;
        case 's':
            if(angle1 > 85) angle1 = 85;
            h.fingers[1].setAngle(angle1 = angle1 + 5);
            break;
        case 'd':
            if(angle2 > 85) angle2 = 85;
            h.fingers[2].setAngle(angle2 = angle2 + 5);
            break;
        case 'f':
            if(angle3 > 85) angle3 = 85;
            h.fingers[3].setAngle(angle3 = angle3 + 5);
            break;
        case 'g':
            if(anglet < -85) anglet = -85;
            h.thumb.setAngle(anglet = anglet - 5);
            break;
        case 'A':
            if(angle0 < 5) angle0 = 5;
            h.fingers[0].setAngle(angle0 = angle0 - 5);
            break;
        case 'S':
            if(angle1 < 5) angle1 = 5;
            h.fingers[1].setAngle(angle1 = angle1 - 5);
            break;
        case 'D':
            if(angle2 < 5) angle2 = 5;
            h.fingers[2].setAngle(angle2 = angle2 - 5);
            break;
        case 'F':
            if(angle3 < 5) angle3 = 5;
            h.fingers[3].setAngle(angle3 = angle3 - 5);
            break;
        case 'G':
            if(anglet > -5) anglet = -5;
            h.thumb.setAngle(anglet = anglet + 5);
            break;
        case 'c':
            c.next();
            break;
        case 'C':
            c.prev();
            break;

    }
    glutPostRedisplay();
}
void kbdArrow(int key, int x, int y){
    switch(key){
        case GLUT_KEY_UP:
            exit(0);
            break;

    }
    glutPostRedisplay();
}
int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
   glutInitWindowSize (500, 500);
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display);
   glutSpecialFunc(kbdArrow);
   glutReshapeFunc(reshape);
   glutKeyboardFunc(kbd);
   glutMainLoop();
   return 0;
}
