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
	int n,m;
	scanf("%d%d", &n,&m);
	if(n>m){
		int tmp = n;
		n=m;
		m=tmp;
	}
	for (int i=n;i<=m;i++){
		if(tong(i) == i){
			printf("%d ", i);
		}
	}
}
