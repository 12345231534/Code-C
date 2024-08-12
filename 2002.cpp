#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i=n-1;i>=0;i--){
		int m =i;
		while (m>0){
			printf("~");
			m--;
		}
		for (int j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
	}
}
