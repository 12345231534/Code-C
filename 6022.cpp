#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


void solve(){
	char s[105];
	char x[105];
	gets(s);
	gets(x);
	for (int i=0;i<strlen(x);i++){
		if(x[i] >= 'A' && x[i] <='Z'){
			x[i] += 32;
		}
	}
	char *token = strtok(s, " ");
	char a[105][105];
	char b[105][105];
	int n=0;
	while (token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	for (int i=0;i<n;i++){
		strcpy(b[i], a[i]);
		for (int j=0;j<strlen(a[i]);j++){
			
			if(a[i][j] >='A' && a[i][j]<='Z'){
				a[i][j] += 32;
			}
		}
	}
	for (int i=0;i<n;i++){
		if (strcmp(a[i], x) !=0){
			printf("%s ", b[i]);
		}
		
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	for (int y=1;y<=t;y++){
		
		char s[105];
		char x[105];
		gets(s);
		gets(x);
		for (int i=0;i<strlen(x);i++){
			if(x[i] >= 'A' && x[i] <='Z'){
				x[i] += 32;
			}
		}
		char *token = strtok(s, " ");
		char a[105][105];
		char b[105][105];
		int n=0;
		while (token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		for (int i=0;i<n;i++){
			strcpy(b[i], a[i]);
			for (int j=0;j<strlen(a[i]);j++){
				
				if(a[i][j] >='A' && a[i][j]<='Z'){
					a[i][j] += 32;
				}
			}
		}
		printf("Test %d: ",y);
		for (int i=0;i<n;i++){
			if (strcmp(a[i], x) !=0){
				printf("%s ", b[i]);
			}
			
		}
			
		printf("\n");
	}
}
