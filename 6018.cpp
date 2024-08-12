#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	if(strcmp(x,y) <0 ) return -1;
	return 1;
}
int main(){
	int t;
	scanf ("%d",&t);
	getchar();
	while (t--){
	
		char s[205],s2[205];
		gets(s);
		gets(s2);
		char a[205][205];
		char b[205][205];
		int n =0,m=0;
		char *token = strtok(s, " ");
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		char *token2 = strtok(s2, " ");
		while(token2 != NULL){
			strcpy(b[m++], token2);
			token2 = strtok(NULL, " ");
		}
		qsort(a,n,sizeof(a[0]), cmp);
		int c[105] ;
		for (int i=0;i<n;i++){
			int oke =1;
			for (int j=0;j<m;j++){
				if(strcmp(a[i], b[j]) ==0){
					oke =0;
				}
			}
			if(oke && c[i] == 0){
				for (int j=i+1;j<n;j++){
					if(strcmp(a[i], a[j])==0){
						c[j] = 1;
					}
				}
				printf("%s ", a[i]);
			}
		}
		printf("\n");
	}
}
