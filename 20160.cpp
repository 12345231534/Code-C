#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	for (int i=1;i<=n;i++){
		int l =1;
		int c =2;
		for (int j=1;j<=i;j++){
			
			if(i%2==1){
				printf("%d",l);
				l+=2;
			}
			else {
				printf("%d", c);
				c+=2;
			}
			
		}
		printf("\n");
	}
}
