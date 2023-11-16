#include "stdio.h"
#include "math.h"

enum typOperace { soucet = 1, vektorovySoucin = 2 };

struct vector3d { double x; double y; double z; };

double vectorSize(struct vector3d u) {
	double size = sqrt(pow(u.x, 2) + pow(u.y, 2) + pow(u.z, 2));

	return size;
}

int vectorSizeComparation(struct vector3d u, struct vector3d v) {
	double sizeU = vectorSize(u);
	double sizeV = vectorSize(v);

	if (sizeU > sizeV) {
		return 1;
	}
	if (sizeU < sizeV) {
		return -1;
	}
	return 0;
}

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ) {
	vector3d w;
	int sizeComp;
	switch (typ) {
		case 1:
			w.x = u.x + v.x;
			w.y = u.y + v.y;
			w.z = u.z + v.z;
			u = w;
			break;

		case 2:
			w.x = u.y * v.z - u.z * v.y;
			w.y = u.z * v.x - u.x * v.z;
			w.z = u.x * v.y - u.y * v.x;
			u = w;
			break;
		case 3:
			sizeComp = vectorSizeComparation(u, v);
			switch (sizeComp) {
			case 1:
				printf_s("|u| > |v|");
				break;
			case 0:
				printf_s("|u| = |v|");
				break;

			case -1:
				printf_s("|u| < |v|");
				break;
			}
			break;
	}
	

	return u;
}

void tisk(struct vector3d u, enum typOperace typ) {
	if(typ == 1||typ == 2)
		printf_s("w = (%.3lf,%.3lf,%.3lf)\n|w|=%.3lf", u.x, u.y, u.z, vectorSize(u));
}