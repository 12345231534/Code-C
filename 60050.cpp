#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[105];
	gets(c);
	
	char a[105][105];
	for (int i=0;i<strlen(c);i++){
		if(isupper(c[i])){
			c[i] += 32;
		}
	}
	char *token = strtok(c, " ");
	int n=0;
	while(token != NULL){
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	int b[105] ; 
	for (int i=0;i<n;i++){
		if(b[i] == 0){
			int cnt =1;
			for (int j=i+1;j<n;j++){
				if(strcmp(a[i],a[j]) == 0){
					cnt++;
					b[j] =1;
				}
			}
			printf ("%s %d\n", a[i], cnt);
		}
	}
}
