
#include <stdio.h>
#include <math.h>


int nt(int n){
	if (n==0 || n==1){
		return 0;
	}
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			return 0;
		}
	}
	return 1;
}
int sum(int n){
	int sum =0;
	while (n>0){
		sum += n%10;
		n/=10;
	}
	return sum;
}
int fibo(int n){
	if (n == 1 || n==0){
		return 1;
	}
	int fn1 = 0;
	int fn2 = 1;
	int fn;
	int ok=0;
	for (int i=2;i<92;i++){
		fn = fn1 + fn2;
		
		if(fn == n){
			return 1;
		}
		fn1 = fn2;
		fn2 = fn;
	
	}
	return 0;
}

int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	if (a>b){
		int tmp = a;
		a= b;
		b= tmp;
	}
	for (int i=a;i<=b;i++){
		if (nt(i) && fibo(sum(i))){
			printf("%d ", i);
		}
	}
}
