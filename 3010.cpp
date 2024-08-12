#include <stdio.h>

int gt(int n){
	int tich=1;
	for (int i=1;i<=n;i++){
		tich *=i;
	}
	return tich;
}
int tong(int n){
	int sum =0;
	while(n>0){
		sum += gt(n%10);
		n/=10;
	}
	return sum;
}
int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		if(tong(i) == i){
			printf("%d ", i);
		}
	}
}
