#include <stdio.h>
void check(int n){
	int sum = 0;
	for (int i=1;i<=n/2;i++){
		if (n%i==0){
			sum += i;
		}
	}
	if (n == sum) {
		printf ("1");
	}
	else printf ("0");
}
int main(){
	int n;
	scanf ("%d", &n);
	check(n);
}
