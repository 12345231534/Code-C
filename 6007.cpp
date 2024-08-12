#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char s[101], a[100];
	gets(s);
	gets(a);
	char *token = strtok(s, " ");
	while (token != NULL){
		if(strcmp(a, token)){
			printf("%s ", token);
		}
		token = strtok(NULL, " ");
	}
}
