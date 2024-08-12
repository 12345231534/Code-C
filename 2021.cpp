#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		printf("%d ", i);
		int x =n-1;
		int a =i;
		for (int j=1;j<i;j++){
			a = a+x;
			printf("%d ", a);
			x--;
		}
		printf("\n");
	}
}
