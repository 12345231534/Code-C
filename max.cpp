#include <stdio.h>

int max(int *a, int *b){
	if(*a >*b){
		return *a;
	}
	return *b;
}

int main(){
	int a = 5;
	int b =10;
	int x = max(&a,&b);
	printf("%d", x);
}
