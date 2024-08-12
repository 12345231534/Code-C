#include <stdio.h>
int max (int a,int b){
	if (a>b) return a;
	return b;
}
int main (){
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	int res=0;int  cnt =1;
	for (int i=0;i<n;i++){
		if (a[i] * a[i+1] < 0){
			cnt ++;
		}
		else {
			cnt = 1;
		}
		res = max(res,cnt);
	}
	if (res==1){
		printf ("0");
	}
	else printf ("%d", res);
}
