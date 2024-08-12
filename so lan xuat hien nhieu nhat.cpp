#include <stdio.h>
int cnt[100001] = {0};
int main (){
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	for (int i=0;i<n;i++){
		cnt[a[i]]++;
		
	}
	int dem =0,res;
	for (int i=0;i<n;i++){
		if (cnt[a[i]] >dem){
			dem = cnt[a[i]];
			res = a[i];
		}
		else if (res > a[i]){
			// so lan  xuat hien bang nhau in ra so be hon 
			res = a[i];
		}
	}
	printf ("%d %d ", res , dem);
}
