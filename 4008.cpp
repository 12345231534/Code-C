#include <stdio.h>
int main(){
	int t;
	scanf ("%d", &t);
	for (int i=1;i<=t;i++){
		printf ("Test %d:\n", i);
		int n,m;
		scanf ("%d %d", &n,&m);
		int p;
		scanf ("%d", &p);
		int a[n],b[m];
	
		for (int i=0;i<n;i++){
			scanf ("%d", &a[i]);
		}
		for (int i=0;i<m;i++){
			scanf ("%d", &b[i]);
		}
	
		for (int i=0;i<p;i++){
			printf ("%d ", a[i]);
			
		}
		for (int i=0;i<m;i++){
			printf ("%d ",b[i] );
		}
		for (int i=p;i<n;i++){
			printf ("%d ", a[i]);
		}
		printf ("\n");
	}
	
}
