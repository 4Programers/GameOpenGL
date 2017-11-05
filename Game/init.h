#ifndef _INIT_H_
#define _INIT_H_
#include "objects.h"

	int init_done;
	Plane plane;
	Bullet bullets;
	Impediment impediments;

	void initGame();
	void startGame();

	int fire_active;
	int move_active;
	int last_mouse_x;
	int imp_active;
#endif
