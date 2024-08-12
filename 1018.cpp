#include <stdio.h>
#include <math.h>
int main (){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		scanf ("%d", &n);
		int x = sqrt(n);
		if (n== pow(x,2)){
			printf ("YES\n");
		}
		else printf ("NO\n");
	}
	return 0;
	
}
