#include <stdio.h>
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		long long n;
		scanf ("%lld", &n);
		long long  a[n];
		int i=0;
		for (int i=0;i<n;i++){
			if (i==0||i==1){
				a[i]= 1;
				
				
			}
			else {
				a[i]= a[i-2]+a[i-1];
				
			}
		}
		printf ("%lld\n", 1ll*a[n-1]);
	}
}
