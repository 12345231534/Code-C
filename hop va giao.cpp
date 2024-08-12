#include <stdio.h>
int cnt[10001] = {0};
int min(int a,int b){
	if (a<b) return a;
	return b;
}
int max(int a, int b){
	if (a>b) return a;
	return b;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		
	
	int n,m;
	scanf ("%d%d", &n,&m);
	int a[n],b[m];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	for (int i=0;i<m;i++){
		scanf ("%d", &b[i]);
	}
	int minval=1e9, maxval=-1e9;
	for (int i=0;i<n;i++){
		cnt[a[i]]++;
		minval = min(minval,a[i]);
		maxval = max(maxval, a[i]);
	}
	for (int i=0;i<m;i++){
		cnt[b[i]]++;
		minval = min(minval,b[i]);
		maxval = max(maxval, b[i]);
	}
	for (int i=minval;i<=maxval;i++){
		if (cnt[i] !=0){
			printf ("%d ", i);
		}
	}
	printf ("\n");
	for (int i=minval;i<=maxval;i++){
		if (cnt[i] ==2) {
			printf ("%d ", i);
		}
	}
	printf ("\n");
}
}
