#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a;
	scanf ("%d", &a);
	int n=0;
	char c[20];
	
	while (a>0){
		int x = a%2;
		sprintf(c[n], "%d",x );
		n/=2;
		n++;
	}
}
