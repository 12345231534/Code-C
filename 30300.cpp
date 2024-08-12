#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int kt(int n){
	char c[10];
	sprintf(c, "%d", n);
	int a = strlen(c);
	for (int i=0;i<a-1;i++){
		if((c[i] - '0') > (c[i+1] - '0') ){
			return 0;
		}
	}
	return 1;
}
int kt2(int n){
	while (n>9){
		int a = n%10;
		n/=10;
		int b = n%10;
		if(a<b){
			return 0;
		}
		
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		int a = pow(10, n-1);
		int b = pow(10,n) -1;
		for (int i=a;i<=b;i++){
			if(kt2(i)){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}
