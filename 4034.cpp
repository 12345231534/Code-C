#include <stdio.h>

int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		scanf ("%d", &n);
		int a[n];
		
		for (int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for (int i=0;i<n;i++){
			int oke =1;
			for (int j=i+1;j<n;j++){
				if(a[i] <= a[j]){
					oke =0;
				}
			}
			if(oke){
				printf ("%d ", a[i]);
			}
		}
		printf("\n");
	}
}