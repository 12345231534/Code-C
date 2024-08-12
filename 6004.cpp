#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char s[100];
	gets(s);
	int n = strlen(s);
	int c=0, m=0,k=0;
	for (int i=0;i<n;i++){
		if(isalpha(s[i])){
			c++;
		}
		else if(isdigit(s[i])){
			m++;
		}
		else {
			k++;
		}
	}
	printf("%d %d %d", c,m,k);
}
