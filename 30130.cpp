#include <stdio.h>

int a[30];

void fibo(){
	
	int fn1 = 0;
	int fn2 = 1;
	a[0] = fn1;
	a[1] = fn2;
	for (int i= 1;i<30;i++){
		int fn = fn1 +fn2;
		a[i] = fn;
		fn2 = fn1;
		fn1 = fn;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	fibo();
	for (int i=0;i<n;i++){
		printf ("%d ", a[i]);
	}
}
