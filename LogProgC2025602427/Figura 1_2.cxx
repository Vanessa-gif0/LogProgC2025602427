#include <math.h>
int main ()
{
	float L=7;
	float pt, at;
	pt= ((23/5.0)*L)+(((2*3.1416)*(L/2))/2);
	at= (L*L)+(2*((1/5.0)*L)*((1/5.0)*L))+(2*((3.0/5.0)*L)*((1/5.0)*L))+(((3.1416)*pow((L/2),2))/2.0);
	
	printf ("El area total es %f\n", at);
	printf ("El perimetro total es %f\n", pt);
	return 0;
}