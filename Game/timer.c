#include "timer.h"
#include "draw.h"
#include<GL/glut.h>
#include "init.h"
#include "callback.h"

void startTimers(){

	glutTimerFunc(10,rotatePlane,1);
	
	

}

void rotatePlane(int timer_id){

	if(timer_id != 1)
		return;

	if(plane->z_rotate <= 360 )	
		plane->z_rotate += 0.1;
	else
		plane->z_rotate = 0;

	glutTimerFunc(100,rotatePlane,1);

}

void moveImpediments(int timer_id){

	if(timer_id != 1){
		return;
	}
	

	if(imp_active ){
		if(impediments->z_pos > 1){
	
			impediments->z_pos = -5;
			impediments->x_pos = random_float(-1,1);
			impediments->dim = random_float(0.02,0.3);
			/*imp_active = 0;
			impediments->in_live = 0;			
			return ;*/
		}
	
	
		impediments->z_pos += 0.2;
		glutPostRedisplay();	
	}
	
	glutTimerFunc(100,moveImpediments,1);



}

void moveBullets(int timer_id){

	if(timer_id != 1 ){
		return;

	}

	if(fire_active){

		if(bullets->z_pos < -5){
			bullets->z_pos =  1;
			fire_active = 0;
			bullets->in_live = 0;
			return;
		}
	
		bullets->z_pos -= 0.2;
	
		glutPostRedisplay();

	}
	
	glutTimerFunc(30,moveBullets,1);	
}



