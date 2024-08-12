#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	char x = 'A';
	for (int i=n;i>=0;i--){
		char m = x;
		int y =i;
		while (y>0){
			printf ("%c", m);
			m+= 2;
			y--;
		}
		x+=2;
		printf("\n");
	}
}
