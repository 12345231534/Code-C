#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	int c1 = sqrt(a);
	if (c1*c1 != a){
		c1++;
	}
	int c2 = sqrt(b);
	printf("%d\n", c2-c1+1);
	for (int i =c1; i <= c2;i++){
		printf ("%d\n", i*i);
	}
}
