#include <math.h>
#include <stdio.h>
int sum(int n){

	int sum =0;
	while (n>0){
		sum += n%10;
		n/=10;
	}
	if (sum%10 == 0){
		return 1;
	}
	else {
		return 0;
	}
}
int tn(int n){
	int m = n;
	int sum = 0;
	while (n>0){
		sum = sum*10 +n%10;
		n/=10;
	}
	if (m == sum){
		return 1;
	}
	else {
		return 0;
	}
	
}
int kt(int n){
	
	while (n>0){
		int s1 = n%10;
		if (s1 ==4 ){
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
			if (tn(i) && sum(i) && kt(i)){
				printf ("%d ",i);
			}
			
		}
		printf("\n");
		
	}
}
