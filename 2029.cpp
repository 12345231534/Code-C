#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	char x = 'A';
	for (int i=1;i<=n;i++){
		char m = x;
		int cd = n-1;
		for (int j=1;j<=i;j++){
			printf("%c ", m);
			m = m+cd;
			cd--;
		}
		x++;
		printf("\n");
	}
}
