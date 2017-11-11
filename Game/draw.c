#include "init.h"
#include "GL/glut.h"
#include<math.h>
#include "draw.h"
#include "timer.h"
#include <stdlib.h>




void drawAll(){

	if(init_done){

			basicDraw();

			if(fire_active)
				fire();

			if(imp_active)
				draw_imp();
			
	}

}

void basicDraw(){

	
		
		glColor3f(plane->red, plane->green, plane->blue);
		glPushMatrix();
			glTranslatef(plane->x_pos,plane->y_pos,plane->z_pos);
			glRotatef(sin(plane->z_rotate)*30,0,0,1);

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



void fire(){
	if(bullets->in_live){

		


		glPushMatrix();
					glColor3f(1,0,0);
					glTranslatef(plane->x_pos, plane->y_pos, bullets->z_pos);
					glutSolidSphere(0.02,50,20);
		glPopMatrix();


		glutPostRedisplay();
			

	}

}

void draw_imp(){

	if(impediments->in_live){		
		
			glPushMatrix();
					glColor3f(0,0,1);
					glTranslatef(impediments->x_pos,impediments->y_pos,impediments->z_pos);
					glutSolidCube(impediments->dim);
			glPopMatrix();


	
			glutPostRedisplay();

		}
}






