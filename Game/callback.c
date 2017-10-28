#include "callback.h"	
#include "init.h"
#include "draw.h"		
#include "timer.h"
#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>

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
  gluLookAt(0, 1 ,2, 0, 0, 0, 0, 1, 0);
	
	drawAll();

	glutSwapBuffers();

}


void onKeyboard(unsigned char c , int x, int y){

	switch(c){

		case 'd' : 
				if(plane.x_pos < 0.6)
					plane.x_pos += 0.01;break;
		case 'a' : 
				if(plane.x_pos > -0.6 )
					plane.x_pos -= 0.01;break;
	
		case 'q' : exit(0);break;

		default : {}
	}
}


void onReshape(int w_width, int w_height){

	window_width = w_width;
	window_height = w_height;

}


void onMouseClick(int button, int state, int x, int y){

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		if(!fire_active)
					fire_active = 1 ;


}

void onMouseMove(int x,int y){

	
}

