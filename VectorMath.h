#pragma once 
enum typOperace {soucet = 1, vektorovySoucin = 2, porovnanni = 3}; 

struct vector3d { double x; double y; double z; };

struct vector3d operace (struct vector3d u, struct vector3d v, enum typOperace typ);  

void tisk (struct vector3d u, enum typOperace typ); 

double vectorSize(struct vector3d u);  

int vectorSizeComparation(struct vector3d u, struct vector3d v);