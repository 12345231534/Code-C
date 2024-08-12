#include <stdio.h>
#include <math.h>
int tn(int n){
	int m =n;
	int s =0;
	while (n>0){
		s = s*10 + n%10;
		n/=10;
	}
	if (m == s){
		return 1;
	}
	else return 0;
}
int tong(int n){
	int s =0;
	while (n>0){
		if(n%10 ==4){
			return 0;
		}
		s += n%10;
		n/=10;
	}
	if(s%10 ==0){
		return 1;
	}
	else return 0;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n ;
		scanf("%d", &n);
		int a = pow(10,(n-1));
		int b = pow(10, n) -1;
		for (int i=a;i<=b;i++){
			if(tn(i) && tong(i)){
				printf("%d ", i);
			}
		}
		printf ("\n");
	}
}
