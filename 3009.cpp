#include <stdio.h>
#include <math.h>
int check(int n){
	int sum =1;
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(i*i != n){
				sum += i;
				sum += (n/i);
			}
			else {
				sum += i;
			}
		}
	}
	return sum;
}
int main(){
	int n,m;
	scanf("%d%d", &n,&m);
	if (n>m){
		int tmp = n;
		n=m;
		m=tmp;
	}
	for (int i=n;i<=m;i++){
		if(check(i) ==i && i!=1){
			printf ("%d ", i);
		}
	}
}
