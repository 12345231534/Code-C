#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void sx(char a[][50], int n){
	for (int i =0;i<n;i++){
		int min =i;
		for (int j=i+1;j<n;j++){
			if(strcmp(a[j], a[min]) <0) min =j;
		}
		char tmp[100];
		strcpy(tmp, a[min]);
		strcpy(a[min], a[i]);
		strcpy(a[i], tmp);
	}
}
// ham cmp a dung truoc b thi return -1
// a dung sau b thi return 1;
int cmp(const void *a, const void *b){
	// ep hai con tro thanh 2 con tro char
	char *x = (char*)a;
	char *y = (char*)b;
	if(strcmp(x,y) <0) return -1;
	else return 1;
}

int main(){
	int t;
	scanf ("%d", &t);
	getchar();
	while(t--){
		char c[100];
		gets(c);
		char a[20][50];
		int n=0;
		char *token = strtok(c," ");
		while (token != NULL){
			strcpy(a[n], token);
			token = strtok(NULL, " ");
			n++;
		}
		qsort(a, n, sizeof(a[0]), cmp);
		for (int i=0;i<n;i++){
			printf ("%s\n", a[i]);
		}
	}
}
