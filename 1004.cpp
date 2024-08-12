#include <stdio.h>

int main(){
	int t;
	 scanf("%d", &t);
	 while (t--){
	 	int n;
	 	 scanf("%d", &n);
	 	 double b = (double)1/n;
	 	 printf("%.15f\n", b);
	 }
}
