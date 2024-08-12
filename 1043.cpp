#include <stdio.h>
int giaithua(int n){
	int gt =1;
	for (int i=1;i<=n;i++){
		gt *=i;
	}
	return gt;
}
int check(int n){
	int sum = 0;
	while(n>0){
		sum += giaithua(n%10);
		n/=10;
	}
	return sum;
}
int main(){
	int n;
	scanf ("%d", &n);
	int sum = check(n);
	if (n==sum ){
		printf ("1");
	}
	else printf ("0");
}
