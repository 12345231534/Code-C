#include <stdio.h>
int max(int a, int b){
	if(a>b) return a;
	else return b;
}
int main(){
	int t;
	scanf ("%d",&t);
	for (int i=1;i<=t;i++){
		int m,n;
		scanf("%d %d", &m,&n);
		int a[m][n];
		for (int i=0;i<m;i++){
			for (int j=0;j<n;j++){
				scanf("%d", &a[i][j]);
			}
		}
		int max1 =0;
		int pos1;
		for (int i=0;i<m;i++){
			int res =0;
			for (int j=0;j<n;j++){
				res += a[i][j];
			}
			if(res > max1){
				max1 = res;
				pos1 =i;
			}
		}
//		printf("%d %d", max1, pos1);
		int max2 =0;
		int pos2;
		for (int i=0;i<n;i++){
			int res =0;
			for (int j=0;j<m;j++){
				if(j!=pos1)
				res += a[j][i];
			}
			if(res > max2){
				max2 = res;
				pos2 = i;
			}
		}
		printf("Test %d:\n",i);
		for (int i=0;i<m;i++){
			if(i != pos1){
				for (int j=0;j<n;j++){
					if(j != pos2)
					printf("%d ", a[i][j]);
					
				}
				printf("\n");	
			}
			
			
		}
		printf("\n");
	}
}
