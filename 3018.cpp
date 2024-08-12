#include <stdio.h>
#include <math.h>
int nt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			return 0;
		}
	}
	return n>1;
}
int fibo( int n){
	int fn1 = 0;
	int fn2 = 1;
	for (int i=2;i<30;i++){
		int fn =fn1+fn2;
		if (fn == n){
			return 1;
		}
		else if(fn < n){
			fn2 = fn1;
			fn1 =fn;
		}
		else{
			return 0;
		}
	}
}
int tong(int n){
	int sum = 0;
	while (n>0){
		sum += n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	if(a>b){
		int tmp =a;
		a=b;
		b= tmp;
	}
	for (int i=a;i<=b;i++){
		if (nt(i) && fibo(tong(i))){
			printf ("%d ", i);
		}
	}
}
