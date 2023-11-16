// Cviceni9.cpp : Defines the entry point for the application.
//

#include "Cviceni9.h"
#include "VectorMath.h"

using namespace std;

int main()
{
	vector3d u;
	vector3d v;
	vector3d w;
	typOperace typ;
	printf_s("Zadejte souradnice vektoru u ve formatu (x,y,z)\n");
	scanf_s(" %lf,%lf,%lf", &u.x, &u.y, &u.z);

	printf_s("Zadejte souradnice vektoru v ve formatu (x,y,z)\n");
	scanf_s(" %lf,%lf,%lf", &v.x, &v.y, &v.z);

	printf_s("Zvolte typ operace(1:soucet, 2:vektorovy soucin, 3: porovnani)\n");
	scanf_s(" %d", &typ);


	w = operace(u, v, typ);
	tisk(w, typ);

	return 0;
}
