#include "init.h"
#include "GL/glut.h"
#include<math.h>
#include "draw.h"
#include "timer.h"


void drawAll(){
	
	basicDraw();
	if(fire_active)
		fire();
}


void basicDraw(){

	if(init_done){
		
		glColor3f(plane.red, plane.green, plane.blue);
		glPushMatrix();
			glTranslatef(plane.x_pos,plane.y_pos,plane.z_pos);
			glRotatef(sin(plane.z_rotate)*30,0,0,1);

			glPushMatrix();
				glTranslatef(0, 0, 1);
				glScalef(0.3, 0.3, 1);
				glutWireCube(0.25);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0, 0.0375, 0.9);			
				glScalef(1, 0.2, 0.1);
				glutWireCube(0.25);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0, 0.0375, 1);			
				glScalef(1, 0.2, 0.1);
				glutWireCube(0.25);
			glPopMatrix();

		glPopMatrix();

		glutPostRedisplay();

	}

}


void rotatePlane(int timer_id){

	if(timer_id != 1)
		return;

	if(plane.z_rotate <= 360 )	
		plane.z_rotate += 0.1;
	else
		plane.z_rotate = 0;

	glutTimerFunc(100,rotatePlane,1);

}

void fire(){

	glPushMatrix();
				glColor3f(1,0,0);
				glTranslatef(plane.x_pos, plane.y_pos, bullets.z_pos + 1);
				glutSolidSphere(0.02,50,20);
	glPopMatrix();


	glutPostRedisplay();

	glutTimerFunc(100,moveBullets,1);
}




