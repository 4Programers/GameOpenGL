#include "allocation.h"
#include "stdio.h"
#include "stdlib.h"

Plane* newPlane(double x, double y, double z , double r , double g, double b , double rotate , int live ){
	
	Plane* p = malloc(sizeof(Plane));

	if(p == NULL){
		printf("Greska pri alokaciji!");
		exit(EXIT_FAILURE);
	}

	p->x_pos = x;
	p->y_pos = y;
	p->z_pos = z;
	p->red = r;
	p->green = g;
	p->blue = b;
	p->z_rotate = rotate;
	p->in_live = live;

	return p;

}

Bullet* newBullet(double x, double y, double z, int live){

	Bullet* b = malloc(sizeof(Bullet));

	if(b == NULL){
		printf("Greska pri alokaciji!");
		exit(EXIT_FAILURE);
		}

	b->x_pos = x;
	b->y_pos = y;
	b->z_pos = z;
	b->in_live = live;

	return b;


}

Impediment* newImpediment(double x, double y, double z, double d, int live){

	Impediment* i = malloc(sizeof(Impediment));

	if(i == NULL){
		printf("Greska pri alokaciji!");
		exit(EXIT_FAILURE);
		}

	i->x_pos = x;
	i->y_pos = y;
	i->z_pos = z;
	i->dim = d;
	i->in_live = live;

	return i;

}

