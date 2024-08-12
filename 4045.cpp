#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n=0;
		
		char kt = ' ';
		int c =0, l=0;
		while (kt != '\n'){
			int x;
			scanf ("%d", &x);
			++n;
			if(x%2 ==0) c++;
			else l++;
			kt = getchar();
		}
		if ((n%2 ==0 && c>l) || (n%2==1 && l>c)){
			printf("YES\n");
		}
		else printf ("NO\n");
	}
}
