#include <stdio.h>
int ucln(int a, int b){
	while (a*b !=0){
		if (a>b){
			a = a%b;
		}
		else b %=a;
	}
	return a+b;
}
int so(int n){
	int res =0;
	while(n > 0){
        int tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    return res;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
    scanf("%d", &n);
   int x = so(n);
   
    if (ucln(n,x) ==1){
    	printf ("YES\n");
	}
	else printf ("NO\n");
	}
	
}
