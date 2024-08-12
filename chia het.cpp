#include <stdio.h>
#include <math.h>
int gt(int n){
	for (int i=1;i<=n;i++){
		n = n*i;
	}
	return n;
}
int main(){
	int n,k;
	scanf ("%d%d" , &n,&k);
	int s = gt(n);
	int x = pow(2,k);
	if (s%x==0) printf ("YES\n");
	else printf ("NO\n");
	return 0;
}
