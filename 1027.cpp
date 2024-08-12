#include <stdio.h>

int ucln(int a, int b){
	while (a*b != 0){
		if (a>b){
			a = a%b;
		}
		else{
			b= b%a;
		}
	}
	return a+b;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a, b;
		scanf ("%d %d", &a, &b);
		int x = ucln(a,b);
		printf ("%d\n", x);
	}
}
