#include <stdio.h>
int ucln(int a, int b){
	while (a*b !=0){
		if (a>b) a = a%b;
		else b = b%a;
	}
	return a+b;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int a,b,c,d;
		scanf ("%d%d%d%d", &a,&b,&c,&d);
		int x = ucln(a,b);
		int y = ucln(c,d);
		if (x==y) printf ("YES\n");
		else printf ("NO\n");
	}
}
