#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	printf("@\n");
	for (int i=1;i<n;i++){
		printf("@");
		char x = 'B';
		char y = 'B';
		for (int j=1;j<=i;j++){
			printf("%c", x);
			x+=2;
		}
		char a = y+ i*2-4;
		for (int j=1;j<i;j++){
			printf("%c", a);
			a-=2;
			
		}
		printf("@");
		printf("\n");
	}
	
}
