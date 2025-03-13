#include <math.h>
int main ()
{
	float L, at, pt, h;
	//asignacion de valores 
	L= 7;
	h= sqrt (pow (L,2) + pow (L,2));
	pt = 8*L + 3*h;
	at = 3*(L*L)/2.0 + L*L + 2*(L*L);
	
	printf ("El area total es %f\n", at);
	printf ("El perimetro total es %f\n", pt);
	return 0; 
}