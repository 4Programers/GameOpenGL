#ifndef _INIT_H_
#define _INIT_H_
#include "objects.h"

	int init_done;
	Plane plane;
	Bullet bullets;
	void initGame();
	void startGame();

	int fire_active;
	int move_active;
	int last_mouse_x;

#endif
