#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char s[100];
	gets(s);
	strlwr(s);
	int n = strlen(s);
	for (int i=0;i<n;i++){
		printf ("%c", s[i]);
	}
	char *token = strtok(s, " ");
	while (token != NULL){
		
	}
}

