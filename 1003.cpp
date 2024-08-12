#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int d;
		scanf("%d",&d);
		long long b = (long long) d * d;
		printf("%lld\n",b);
	}
}
