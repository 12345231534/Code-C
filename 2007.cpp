#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		int x =i;
		while (x>0){
			printf("*");
			x--;
		}
		printf("\n");
	}
}

