#include <stdio.h>
#include <math.h>
int main (){
	float a,b,c;
	scanf ("%f %f %f", &a, &b, &c);
	float denta= b*b - 4*a*c;
	
	if (a==0 && b==0 && c==0){
		printf ("NO");
		return 0;
	}
	if (denta >0){
		float x1 = (float)(-b + sqrt(denta))/(2*a);
		float x2 = (float)(-b - sqrt(denta))/(2*a);
		printf ("%.2f %.2f", x1, x2);
	}
	if (denta ==0) {
		float x3 = (float)-b/2*a;
		printf ("%.2f", x3);
	}
	if (denta <0) printf ("NO");
	return 0;
}
