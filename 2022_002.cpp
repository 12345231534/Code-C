#include <stdio.h>
#include <math.h>

int nt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0) {
			return 0;
		}
	}
	return n>1;
}
int dao(int n){
	int s=0;
	while (n>0){
		s= s*10 + n%10;
		n/=10;
	}
	return s;
}
int main(){
	int n;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	for (int i=0;i<n;i++){
		int x = dao(a[i]);
		if(nt(a[i]) && nt(x)){
			printf("1 ");
		}
		else printf("0 ");
	}
}

