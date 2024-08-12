#include <stdio.h>
#include <math.h>
int kt (int n){
	int sum=1;
	for (int i =2;i<= sqrt(n);i++){
		if (n%i ==0){
			if(i*i != n){
				sum += i;
				sum += n/i;
			}
		}
	}
	return sum;
}
int main(){
	int n;
	scanf ("%d", &n);
	if (n== kt(n)){
		printf ("1");
	}
	else printf("0");
}
