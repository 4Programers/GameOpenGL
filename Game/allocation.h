#ifndef _ALLOCATION_H_
#define _ALLOCATION_H_

#include "objects.h"

Plane* newPlane(double x, double y, double z , double red , double green, double blue , double rotate , int live );
Bullet* newBullet(double x, double y, double z, int live);
Impediment* newImpediment(double x, double y, double z, double d, int live);









#endif
