#include <stdio.h>

int main(){
	int t;
	scanf ("%d", &t);
	for (int i=1;i<=t;i++){
		int n;
		scanf ("%d", &n);
		int a[n][n];
		int b[n][n];
		for (int i=0;i<n;i++){
			int x =1;
			for (int j=0;j<n;j++){
				if(x <=i+1){
					a[i][j] = x;
					x++;
				}
				else {
					a[i][j] =0;
				}
			}
		}
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				b[i][j] = a[j][i];
			}
		}
		int c[n][n];
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				c[i][j] =0;
				for (int k = 0;k<n;k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
			
		}
		printf("Test %d:\n", i);
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	}
}
