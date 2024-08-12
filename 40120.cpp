#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n], b[100] ={}, oke=0;
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
		b[a[i]]++;
	}
	for (int i=0;i<n;i++){
		if(b[a[i]] > 1){
			printf ("%d ", a[i]);
			oke =1;
			b[a[i]] =0;
		}
	}
	if(oke ==0){
		printf("0");
	}
}
