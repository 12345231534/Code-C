#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void solve(){
	char s[105];
	gets(s);
	char *token = strtok(s, " ");
	char a[105][105];
	int n =0;
	while (token != NULL){
		strcpy(a[n], token);
		token = strtok(NULL, " ");
		n++;
		
	}
	for (int i =0;i<n;i++){
		int x = strlen(a[i]);
		for (int j=0;j<x;j++){
			if(a[i][j] >= 'A' && a[i][j] <='Z'){
				a[i][j] += 32;
			}
		}
	}
	for (int i=0 ;i <n; i++){
		if(a[i][0] >= 'a' && a[i][0] <= 'z'){
			a[i][0] -= 32;
		}
	}
	
	for (int i=0;i<n;i++){
		printf("%s", a[i]);
		if(i != n-1){
			printf(" ");
		}
		
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while (t--){
		solve();
		printf("\n");
	}
	return 0;
}
