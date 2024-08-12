#include <stdio.h>
#include <math.h>
int a[100005];
void era(){
	for (int i=0;i<=100005;i++){
		a[i] =1;
	}
	a[0]=a[1] =0;
	for (int i=0;i<=sqrt(100005);i++){
		if(a[i]){
			for (int j=i*i;j<=100005;j+=i){
				a[j] =0;
			}
		}
	}
}
int main(){
	era();
	int n;
	scanf ("%d", &n);
	int b[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf ("%d", &b[i][j]);
		}
	}
	int s =0;
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			if(a[b[i][j]]){
				s+= b[i][j];
			}
		}
	}
	printf("%d", s);
}
