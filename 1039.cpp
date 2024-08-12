#include <stdio.h>
#include <string.h>
int main(){
	char a[10];
	gets(a);
	int n = strlen(a);
	printf("%d", n);
}
