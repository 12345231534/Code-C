#include <math.h>
#include <stdio.h>

int kt(int n){
	
	while (n>=10){
		int s1 = n%10;
		 
		int s2 = (n/10)%10; // 
		if (s1<s2){
			return 0;
		}
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		scanf ("%d", &n);
		int a = pow(10,(n-1));
		int b = pow(10, n)-1;
		for (int i=a;i<=b;i++){
			if (kt(i)){
				printf ("%d ",i);
			}
			
		}
		printf("\n");
	}
}
