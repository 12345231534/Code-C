#include <stdio.h>
#include <math.h>
int kt(long long a, long long b){
	if (a>b){
		long long tmp = a;
		a =b;
		b = tmp;
	}
	if (b/a ==2){
		return 1;
	}
	return 0;
}

void soDep(long long n){
	long long m =n;
	
	long long soDau;
	long long soCuoi = n%10;
	long long k=0;
	while (m>0){
		k++;
		soDau = m%10;
		m/=10;
	}
	long long h = n/10;
	long long dao = 0;
	while (h>0){
		dao = dao*10 + h%10;
		h/=10;
	}
	long long x = dao/10;
	long long y = 1ll*soDau * 1ll*pow(10,k-1) + x*10 + soCuoi;
	if (y == n && kt(soDau, soCuoi) ){
		printf("YES\n %lld", y);
	}
	else {
		printf ("NO\n %lld", soCuoi);
	}
}
//212345678876543214
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		long long n;
		scanf ("%lld", &n);
		soDep(n);
	}
}
