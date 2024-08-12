#include <stdio.h>
void fibo(int n){
	int fn2=0;
	int fn1=1;
	printf ("0 1 ");
	for (int i=2;i<n;i++){
		int fn = fn2 + fn1;
		printf ("%d ", fn);
		fn2 = fn1;
		fn1 = fn;
	}
}
int main(){
	int n;
	scanf ("%d", &n);
	fibo(n);
}
