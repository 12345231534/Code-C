#include <stdio.h>
int x[92];
void fibo(){
	 x[0] = 0;
	 x[1] = 1;
	for (int i=2;i<93;i++){
		x[i] = x[i-1] + x[i-2];
	}
}

int main(){
	fibo();
	
	int n;
		scanf ("%d", &n);
	
		
		int a[n][n];
		int c1 = 0,c2 = n-1,h1 = 0,h2 = n-1;
		int cnt=0;
		while (c1<=c2 && h1<=h2){
			for (int i=c1;i <=c2;i++){
				a[h1][i] = x[cnt];
				++cnt;
			}
			++h1;
			for (int i=h1;i<=h2;i++){
				a[i][c2] = x[cnt];
				cnt++;
			}
			--c2;
			if(c1<=c2){
				for (int i=c2;i>=c1;i--){
					a[h2][i] =x[cnt];
					cnt++;
				}
				--h2;
			}
			if(h1 <= h2){
				for (int i=h2;i>=h1;i--){
					a[i][c1] = x[cnt];
					cnt++;
				}
				++c1;
			}
			
		}
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
}
