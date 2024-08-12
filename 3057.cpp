#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

long long max(char a[], int n){
	for (int i=0;i<n;i++){
		if (a[i] == '5'){
			a[i] = '6';
		}
	}
	long long x = atoll(a);
	return x;
}
long long min(char a[], int n){
	for (int i=0;i<n;i++){
		if (a[i] == '6'){
			a[i] = '5';
		}
	}
	long long x = atoll(a);
	return x;
}

int main(){
	int t;
	scanf ("%d", &t);
	getchar();
	while (t--){
		char a[20];
		scanf ("%s", a);
		char b[20];
		scanf ("%s", b);
		int n = strlen(a);
		int m = strlen(b);
		long long x1 = max(a,n);
		long long x2 = max(b,m);
		long long tong = x1+x2;
		long long y1 = min(a,n);
		long long y2 = min(b,m);
		long long hieu = y1+y2;
		printf ("%lld %lld\n",hieu, tong);
	}
}
