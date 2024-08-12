#include <stdio.h>
int tong(int n){
	int sum =0;
	while (n>0){
		sum += n%10;
		n/=10;
	}
	return sum ;
}
int main(){
	int a,b;
	scanf ("%d %d", &a, &b);
	int x =tong(a);
	int y = tong(b);
	if (x<y){
		printf ("%d %d", a, b);
		
	}
	else if (x==y){
		printf ("%d %d", a, b);
	}
	else printf ("%d %d", b, a);
}
