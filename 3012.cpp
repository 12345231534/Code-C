#include <stdio.h>
int check(int n){
	if (n ==0 || n==1){
		return 1;
	}
	long long fn2=0;
	long long fn1=1;
	for (int i=3;i<=92;i++){
		 long long fn = fn2 +fn1;
		 if (n==fn ){
		 	return 1;
		 }
		 
		 fn2=fn1;
		 fn1 = fn;
	}
	return 0;
}
int main(){
	long long n;
	scanf ("%lld", &n);
	if (check(n)) 
	printf ("1");
	else printf ("0");
}
