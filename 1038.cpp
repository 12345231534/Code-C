#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	char a[10];
	gets(a);
	int n = strlen(a);
	char c = a[0];
	a[0] = a[n-1];
	a[n-1] = c;
	if (a[0] == '0'){
		for (int i = 1; i<n;i++){
			printf ("%c", a[i]);
		}
	}
	else{
		for (int i = 0; i<n;i++){
		printf ("%c", a[i]);
		}
	}
}
