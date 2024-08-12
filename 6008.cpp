#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[105];
	gets(c);
	char *token = strtok(c, " ");
	int n =0;
	char a[100][100];
	while (token != NULL){
		strcpy(a[n],token);
		n++;
		token = strtok(NULL, " ");
	}
	for (int i=0;i<n;i++){
		int oke =1;
		for (int j =0;j<i;j++){
			if(strcmp(a[i], a[j])==0){
				oke =0;
			}
		}
		if (oke){
			printf ("%s ", a[i]);
		}
	}
}
