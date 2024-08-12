#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf ("%d", &n);
		int a[n];
		int b[101] = {};
		for (int i=0;i<n;i++){
			scanf ("%d", &a[i]);
			b[a[i]]++;
		}
		int max =-1e9;
		for (int i=0;i<n;i++){
			if(b[a[i]] > max){
				max = b[a[i]];
			}
		}
//		printf ("%d", max);
		for (int i=0;i<n;i++){
			if(b[a[i]] == max){
				printf ("%d ", a[i]);
				b[a[i]] =0;
			}
		}
		printf ("\n");
	}
}
