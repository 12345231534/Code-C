#include <stdio.h>

int kt(int n){
	while (n>9){
		int a = n%10;
		n /= 10;
		int b = n%10;
		if(a >= b){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a,b;
		int dem =0;
		scanf ("%d%d", &a,&b);
		for (int i=a;i<=b;i++){
			if(kt(i)){
				dem++;
			}
		}
		printf("%d\n",dem);
	}
}
