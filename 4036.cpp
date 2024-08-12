#include <stdio.h>

int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
void doi(int n){
	int cnt=0;
	for (int i=0;i<10;i++){
		if(n >= a[i]){
			int z = n / a[i];
			cnt+= z;
			n -= a[i]*z;
		}
		
		if(n==0) break;
		
	}
	printf ("%d\n", cnt);
//	return cnt;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
//		printf("%d\n", doi(n));
		doi(n);
	}
}
