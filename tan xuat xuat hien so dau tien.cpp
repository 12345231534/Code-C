#include <stdio.h>
int main(){
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	int dem =0,res;
	
	for (int i=0;i<n;i++){
		int cnt =1;
		for (int j=i+1;j<n;j++){
			if (a[i] == a[j]){
				cnt++;
			}
		}
		if (dem <cnt){
			dem = cnt;
			res = a[i];
		}
	}
	printf ("%d %d ", res, dem);
}
