#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int n,m;
	scanf ("%d %d", &n,&m);
	int a[n][m];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			int x = -10 +  rand()%30;
			a[i][j] = x;
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			printf("%d ", a[i][j]);
		}
		printf ("\n");
	}
	int s =0;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if(a[i][j] % 2==0){
				s+= a[i][j];
			}
		}
	}
	printf ("Tong so Chan :%d\n", s);
	printf("\n");
	for (int i=0;i<n;i++){
		int tong =0;
		for (int j=0;j<m;j++){
			s+= a[i][j];
		}
		printf("Tong dong thu %d: %d\n", i+1,s);
	}
}
