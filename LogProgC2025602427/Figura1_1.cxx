#include <math.h>
int main ()
{
	float L=7;
	float pt, at;
	pt= (7*L)+2*(sqrt((pow((3*L), 2)+pow (L,2))))+(((2*3.1416)*((3*L)/2))/2);
	at= 2*((3*L)*L)+2*((L*(3*L))/2)+(((3.1416)*pow(((3*L)/2),2))/2.0);
	
	printf ("El area total es %f\n", at);
	printf ("El perimetro total es %f\n", pt);
	return 0;
}