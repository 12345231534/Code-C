#include <stdio.h>
int main(){
	int a,b,c;
	scanf ("%d %d %d", &a, &b, &c);
	int min = a;
	if (b<a) {
		min = b;
	}
	if (c<a) {
		min = c;
	}
	printf ("%d", min);
	return 0;
}
