#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while (t--){
		char s[201] ={};
		gets(s);
		int cnt=0;
		char *token = strtok(s, " ");
		while(token != NULL){
			cnt++;
			token = strtok(NULL, " ");
		}
		printf ("%d\n", cnt);
	}
	return 0;
}
