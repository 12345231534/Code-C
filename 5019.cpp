#include <stdio.h>
#include <math.h>
int e[100005];
void era(){
	for (int i=0;i<=100005;i++){
		e[i] =1;
	}
	e[0]=e[1] =0;
	for (int i=0;i<=sqrt(100005);i++){
		if(e[i]){
			for (int j=i*i;j<=100005;j+=i){
				e[j] =0;
			}
		}
	}
}

int main(){
	int t;
	scanf ("%d", &t);
	era();
	int x[100005];
	int y=0;
	for (int i=2;i<100005;i++){
		if(e[i]){
			x[y] = i;
			y++;
		}	
	}
	for (int i=1;i<=t;i++){
		int n;
		scanf ("%d", &n);
		printf("Test %d:\n",i);
		
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
	
}
