#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<n;i++){
		int x =i;
		while (x>0){
			if (x==i || x ==1){
				printf("*");
			}
			else printf(".");
			x--;
		}
		printf("\n");
	}
	for (int i=0;i<n;i++){
		printf("*");
	}
}

