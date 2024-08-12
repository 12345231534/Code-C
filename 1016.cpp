#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	for (int i=1; i<=10;i++){
		int s = n* i;
		printf ("%d ", s);
	}
}
