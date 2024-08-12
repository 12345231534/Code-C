#include <stdio.h>
int main (){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		scanf ("%d",&n);
		int a[n];
		for (int i=0;i<n;i++){
			scanf ("%d", &a[i]);
		}
		int cnt=0;
		for (int i=0;i<n;i++){
			int ok =1;
			for (int j=0;j<i;j++){
				if (a[j]>=a[i] ) {
					ok =0;
					break;
				}
				
			}
			if (ok) cnt++;
		}
		printf ("%d\n", cnt);
	}
}
