#include <stdio.h>

int kt (int n, int a[101], int b[101]){
	for (int i=0;i<n;i++){
		if (a[i] != b[i]){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		scanf ("%d",&n);
		int a[n];
		for (int i=0;i<n;i++){
			scanf ("%d", &a[i]);
		}
		int b[n];
		for (int i=0;i<n;i++){
			b[i] = a[n-i-1];
		}
		if(kt(n, a, b)){
			printf ("YES\n");	
		}
		else {
			printf ("NO\n");
		}
	}
}
