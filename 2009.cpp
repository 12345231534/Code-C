#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		int x = n-i;
		int y = i;
		while (x>0){
			printf("~");
			x--;
		}
		while(y>0){
			printf("*");
			y--;
		}
		printf("\n");
	}
	
}

