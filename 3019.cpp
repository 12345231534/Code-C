#include <stdio.h>
#include <math.h>
int tn(long long n){
	long long m =n;
	long long s = 0;
	while (n>0){
		s = s*10 + n%10;
		n/=10;
	}
	if(s==m){
		return 1;
	}
	return 0;
}
int tong(long long n){
	long long s =0;
	while (n>0){
		s += n%10;
		n/=10;
	}
	if (s%10==0){
		return 1;
	}
	return 0;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		scanf ("%d", &n);
		long long a = pow(10,n-1);
		long long b = pow(10,n);
		int dem =0;
		for(long long i=a;i<=b;i++){
			if(tn(i) && tong(i)){
				dem++;
			}
		}
		printf ("%d\n", dem);
	}
}
