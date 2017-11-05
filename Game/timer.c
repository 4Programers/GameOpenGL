#include "timer.h"
#include "draw.h"
#include<GL/glut.h>
#include "init.h"

void startTimers(){

	glutTimerFunc(10,rotatePlane,1);
	
	

}
void moveImpediments(int timer_id){

	if(timer_id != 1){
		return;
	}
	

	if(imp_active ){
		if(impediments.z_pos > 1){
			//printf("%lf %lf",impediments.x_pos , impediments.dim);
			impediments.z_pos = -5;
			imp_active = 0;
			impediments.in_live = 0;			
			return ;
		}
	
	
		impediments.z_pos += 0.2;
		glutPostRedisplay();	
	}
	
	glutTimerFunc(50,moveImpediments,1);



}

void moveBullets(int timer_id){

	if(timer_id != 1 ){
		return;

	}

	if(fire_active){

		if(bullets.z_pos < -5){
			bullets.z_pos =  1;
			fire_active = 0;
			bullets.in_live = 0;
			return;
		}
	
		bullets.z_pos -= 0.2;
	
		glutPostRedisplay();

	}
	
	glutTimerFunc(30,moveBullets,1);	
}



