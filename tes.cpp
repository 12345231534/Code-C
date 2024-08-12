#include <stdio.h>

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int a =5, b=10;
	
	printf("%d %d", a, b);
}
