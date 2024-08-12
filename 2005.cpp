#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n,&m);
	for (int i=0;i<n;i++){
		int x =i;
		while (x>0){
			printf("~");
			x--;
		}
		for (int j=0;j<m;j++){
			printf("*");
		}
		printf("\n");
	}
}
