#include <stdio.h>

int main(){
	int t;
	scanf ("%d", &t);
	int a[101][101];
	int x =1e9, y =1e9;
	for (int i=0;i<t;i++){
		int n,m;
		scanf ("%d %d", &n,&m);
		if(n<x){
			x = n;
		}
		if(m<y){
			y = m;
		}
	}
	printf("%lld", (long long)x*y);
	
}
