#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int kt(char a[]){
	int n = strlen(a);
	for (int i=0;i<=n/2;i++){
		if(a[i] != a[n-i-1]){
			return 0;
		}
	}
	return 1;
}
int soChan(char a[]){
	int n =strlen(a);
	for (int i=0;i<n;i++){
		if((a[i] -'0') % 2 ==1) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		char s[501];
		scanf("%s", s);
		if(kt(s) && soChan(s)){
			printf ("YES\n");
		}
		else{
			printf ("NO\n");
		}
	}
}
