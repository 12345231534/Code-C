#include <stdio.h>

void solve(int a[], int n){
	for (int i=0;i<n;i++){
		for (int j =i+1;j<n;j++){
			if(a[i] == a[j]){
				printf("%d\n",a[i]);
				return;
			}
		}
	}
	printf("NO\n");
}

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
		solve(a,n);
	}
}
