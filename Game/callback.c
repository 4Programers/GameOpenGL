#include "callback.h"			
#include<GL/glut.h>

int window_width = 0;
int window_height = 0;


void onDisplay(){
	
	glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);

	glViewport(0, 0, window_width, window_height);

   
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(60, window_width/(float)window_height, 1, 5);

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  gluLookAt(1, 0.5, 1, 0, 0, 0, 0, 1, 0);
	
	glPushMatrix();
		glColor3f(1,0,0);	
		glutWireCube(0.5);	
	glPopMatrix();	

	glutSwapBuffers();

}


void onKeyboard(unsigned char c , int x, int y){


}


void onReshape(int w_width, int w_height){

	window_width = w_width;
	window_height = w_height;

}

