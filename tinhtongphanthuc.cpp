#include <stdio.h>
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
	
	int n;
	scanf ("%d", &n);
	float sum = 0;
	if (n%2 == 0){
		for (int i=2;i<=n;i+=2){
			sum += 1.0*1/i;
		}
	}
	else for (int i=1;i<=n;i+=2){
		sum +=1.0*1/i;
	}
	printf ("%.6f", sum);
	printf ("\n");
}
}
