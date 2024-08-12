#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// hàm smp sap xep cac so nguyen lon
int cmp1(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	if(strlen(x) == strlen(y)){
		if(strcmp(x,y) < 0) return -1;
		else return 1;
	}
	else {
		return strlen(x) - strlen(y);
	}

}
// ham cmp sap xep 2 xau theo thu tu tu dien
int cmp2(const void *a, const void *b){
	// ep hai con tro thanh 2 con tro char
	char *x = (char*)a;
	char *y = (char*)b;
	if(strcmp(x,y) <0) return -1;
	else return 1;
}


int main(){
	char a[100][100];
	int n =5;
	for (int i=0;i<n;i++){
		scanf ("%s", a[i]);
	}
	qsort(a,n,sizeof(a[0]),cmp1);
	for (int i=0;i<n;i++){
		printf("%s ", a[i]);
		
	}
}
