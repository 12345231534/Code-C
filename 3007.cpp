#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
int nto(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
int kt(char a[]){
	int n = strlen(a);
	for (int i=0;i<=n/2;i++){
		if(a[i] != a[n-i-1]){
			return 0;
		}
	}
	return 1;
}


int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a, b;
		scanf ("%d %d", &a, &b);
		int oke =0;
		for(int i=a;i<=b;i++){
			if(nto(i)){
				char s[10];
				sprintf(s, "%d", i);
				if(kt(s)){
					oke++;
					printf("%s ", s);
					if(oke %10 ==0){
						printf("\n");
					}
				}
			}
			
			
		}
		printf("\n");
		printf("\n");
	}
}
