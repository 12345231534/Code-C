#include <stdio.h>

int check(int a, int b, int c){
	if(a==c) return b;
	if(a==b) return c;
	if(b==c) return a;
}

int main(){
	int t;
	scanf ("%d",&t);
	while (t--){
		int a,b,c;
		scanf("%d %d%d", &a,&b,&c);
		int kb = check (a,b,c);
		printf("%d\n", kb);
	}
}
