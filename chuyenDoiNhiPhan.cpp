#include <stdio.h>

void deQuy(int n){
	if(n ==0){
		return;
	}
	deQuy(n/2);
	printf("%d", n%2);
}
int main(){
	int n;
	scanf("%d", &n);
	if(n==0) {
		printf("0");
	}
	else{
		deQuy(n);
	}
}
