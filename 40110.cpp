#include <stdio.h>
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		scanf ("%d", &n);
		int  a[n];
		int count =1;
		
		for (int i=0;i<n;i++){
			scanf ("%d", &a[i]);
		}
		for (int i=1;i<n;i++){
			int ok=0;
			for (int j=0;j<i;j++){
			
				if(a[i] < a[j]){
					ok =0;
					break;
				}
				else {
					ok=1;
				}
				
			}
			if(ok ){
				count++;
			}
		}
		printf ("%d\n", count);
	}
}
