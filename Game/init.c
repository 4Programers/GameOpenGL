#include "init.h"
#include "draw.h"
#include "GL/glut.h"
#include "timer.h"
#include "callback.h"

int fire_active = 0;
int move_active = 0;
int last_mouse_x = 0;
int imp_active = 0;

void initGame(){	

		Impediment impediments = { random_float(-1,1) , 0 , -5, random_float(0.02,0.3) , 1};
		Plane plane = { -1 , 0 , 0 , 0 , 0 , 0 , 0 , 1};
		Bullet bullets = { 0 , 0 , 1 , 1};
	
		
		init_done = 1;
			
}


void startGame(){

	initGame();
	startTimers();

}

