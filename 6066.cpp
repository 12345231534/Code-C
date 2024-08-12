#include <stdio.h>
#include <string.h>
int main(){
	char s[205];
	scanf ("%s", s);
	int n = strlen(s);
	while (n!=1){
		int x = n/2;
		int y = n-x;
		
		printf("%d %d\n", x, y);
		n/=2;
	}
}
