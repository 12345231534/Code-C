#include <stdio.h>


int main(){
	int n,m;
	scanf ("%d %d", &n, &m);
	int x[n][m];
	
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf ("%d", &x[i][j]);
		}
	}
	int a,b;
	scanf ("%d %d", &a,&b);
	a--;
	b--;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if(i==a){
				int tmp = x[a][j];
				x[a][j] = x[b][j];
				x[b][j] = tmp;
			}
		}
		
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			printf ("%d ", x[i][j]);
		}
		printf("\n");
	}
}
