#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char s[105];
	gets(s);
	char a[105][105];
	int n =0;
	char *token = strtok(s, " ");
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<strlen(a[i]);j++){
			if(a[i][j] >'A' && a[i][j] <='Z'){
				a[i][j] += 32;
			}
		}
	}
	for (int i=0;i<n-1;i++){
		printf("%c", a[i][0]);
	}
	printf("%s",a[n-1]);
	printf("@ptit.edu.vn");
}
