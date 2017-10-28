#include "init.h"
#include "draw.h"
#include "GL/glut.h"
#include "timer.h"

int fire_active = 0;
int move_active = 0;
int last_mouse_x = 0;

void initGame(){	
		Plane plane = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1};
		Bullet bullets = { 0 , 0 , 0 , 1};
		init_done = 1;
			
}

void startGame(){

	initGame();
	startTimers();

}
