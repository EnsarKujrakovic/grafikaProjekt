#include "Model.h"
#include "SOIL.h"
Model::Model(){
}

void Model::CreateBox(float x, float y, float z){
    xsize = x;
    ysize = y;
    zsize = z;
}
void Model::Translate(float x, float y, float z){
    xtran = x;
    ytran = y;
    ztran = z;
}
void Model::Rotate(float a, float x, float y, float z){
    angle = a;
    xaxis = x;
    yaxis = y;
    zaxis = z;
}
void Model::Draw(){

    glTranslatef(xtran, ytran, ztran);
    glRotatef(angle, xaxis, yaxis, zaxis);
    glScalef(xsize, ysize, zsize);
    glBegin(GL_QUADS);
        // Top
      glColor3f(0.0, 1.0, 0.0);     // Green
      glVertex3f( 1, 1, -1);
      glVertex3f( 0, 1, -1);
      glVertex3f( 0, 1,  0);
      glVertex3f( 1, 1,  0);

      // Bottom
      glColor3f(1.0, 0.5, 0.0);     // Orange
      glVertex3f( 1, 0,  0);
      glVertex3f( 0, 0,  0);
      glVertex3f( 0, 0, -1);
      glVertex3f( 1, 0, -1);

      // Front
      glColor3f(1.0, 0.0, 0.0);     // Red
      glVertex3f( 1, 1, 0);
      glVertex3f( 0, 1, 0);
      glVertex3f( 0, 0, 0);
      glVertex3f( 1, 0, 0);

      // Back
      glColor3f(1.0, 1.0, 0.0);     // Yellow
      glVertex3f( 1, 0, -1);
      glVertex3f( 0, 0, -1);
      glVertex3f( 0, 1, -1);
      glVertex3f( 1, 1, -1);

      // Left
      glColor3f(0.0, 0.0, 1.0);     // Blue
      glVertex3f( 0,  1,  0);
      glVertex3f( 0,  1, -1);
      glVertex3f( 0,  0, -1);
      glVertex3f( 0,  0,  0);

      // Right
      glColor3f(1.0, 0.0, 1.0);     // Magenta
      glVertex3f( 1,  1, -1);
      glVertex3f( 1,  1,  0);
      glVertex3f( 1,  0,  0);
      glVertex3f( 1,  0, -1);

    glEnd();
    glFlush();
//    glutSwapBuffers();

}
void LoadTexture(){
    GLuint tex_2d = SOIL_load_OGL_texture
	(
		"texture.bmp",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
	);
}
