#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int tn(char a[], int n){
	for (int i=0;i<=n/2;i++){
		if(a[i]-'0' != a[n-i-1]-'0' ){
			return 0;
		}
	}
	return 1;
}
int check(char a[], int n){
	if(a[0] !='8' || a[n-1] !='8') return 0;
	int sum =0;
	for (int i=0;i<n;i++){
		sum += a[i]-'0';
	}
	if(sum %10 !=0){
		return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		char a[501];
		scanf ("%s", a);
		int n = strlen(a);
		if(tn(a,n) && check(a,n)){
			printf("YES\n");
		}
		else printf ("NO\n");
	}
}
