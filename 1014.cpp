#include<stdio.h>
int main(){
	float a,b;
	scanf ("%f %f", &a, &b);
	float x=0;
	if (a!=0 && b!=0){
		x= -b / a;
		printf ("%.2f", x);
	}
	if (a==0 && b!=0) {
		printf ("Vo nghiem");
	}
	if (a==0 &&b==0){
		printf ("Vo so nghiem");
	}
}
