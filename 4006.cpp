#include <stdio.h>
int main(){
	int n;
	scanf ("%d", &n);
	int a[n];
	int i=0;
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	for (int j=n-1;j>=i;j--){
		printf ("%d ", a[j]);
	
}
}