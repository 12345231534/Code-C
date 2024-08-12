#include <stdio.h>
int check(int a[], int n){
	for (int i=0;i<n-2;i++){
		if (a[i] >= a[i+1]) return 0;
	}
	return 1;
}
int main (){
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	int max = a[0];
	for (int i=0;i<n;i++){
		if (a[i] >= max) {
			printf ("%d ", a[i]);
		}
		if (a[i] >max) {
			max = a[i];
		}
	}
}
