#include <stdio.h>
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	for (int i=0;i<n;i++){
		int max=a[i];
		int ok =1;
		for (int j=i+1;j<n;j++){
			
			if (max <= a[j]){
				
				ok =0;
				break;
			}
			
		}
		if (ok ==1 ) printf ("%d ", max);
	}
	printf ("\n");
	
	}
}
