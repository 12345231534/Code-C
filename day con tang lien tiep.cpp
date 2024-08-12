#include <stdio.h>
int max (int a, int b){
	if (a>b) return a;
	return b;
}
int main (){
	int n;
	scanf ("%d", &n);
	int a[1000];
	int res=0,cnt =1;
	int idx;
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	for (int i=1;i<n;i++){
		if (a[i] > a[i-1]){
			cnt ++;
		}
		else {
			cnt =1;
		}
		if (cnt >=res){
			res = cnt;
			idx = i -res+1;
		}
	}
	printf ("%d\n", res);
	for (int i=0;i<res;i++){
		printf ("%d ", a[idx +i]);
	}
}
