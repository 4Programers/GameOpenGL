#include "init.h"
#include "draw.h"
#include "GL/glut.h"
#include "timer.h"
#include "callback.h"
#include "allocation.h"


int fire_active = 0;
int move_active = 0;
int last_mouse_x = 0;
int imp_active = 0;
int	init_done = 0;


Plane* plane = NULL;
Bullet* bullets = NULL;
Impediment* impediments = NULL;

void initGame(){

	impediments = newImpediment( random_float(-1,1) , 0 , -5, random_float(0.02,0.3) , 1);
	plane = newPlane( 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1);
	bullets = newBullet( 0 , 0 , 1 , 1 );
	init_done = 1;

			}



void startGame(){

	initGame();
	startTimers();
	
}

