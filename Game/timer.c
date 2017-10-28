#include "timer.h"
#include "draw.h"
#include<GL/glut.h>
#include "init.h"

void startTimers(){

	glutTimerFunc(10,rotatePlane,1);

}

void moveBullets(int timer_id){

	if(timer_id != 1 ){
		return;
	}

	if(bullets.z_pos < -3){
		bullets.z_pos =  0;
		fire_active = 0;
		return;
	}

	bullets.z_pos -= 0.1;
	
	glutTimerFunc(200,moveBullets,1);	
}



