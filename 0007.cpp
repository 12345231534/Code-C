#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	int a[n];
	int x =0;
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
		
	}
	for (int i=0;i<n;i++){
		x+= a[i];
	}
	float res = (float)x / n;
	printf("%.3f", res);
	
}
