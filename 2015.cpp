#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	int m =1;
	for (int i=1;i<=n;i++){	
		
		for (int j=1;j<=m;j++){
			printf("%d",j);
		}
		m+=2;
		printf("\n");
	}
}