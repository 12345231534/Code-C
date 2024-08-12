#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct SinhVien{
	int ma;
	char ten[100];
	float d1,d2,d3;
};
typedef struct SinhVien SV;
int x =0;
SV add(){
	getchar();
	SV a;
	a.ma = x+1;
	x++;
	gets(a.ten);
	float d1,d2,d3;
	scanf ("%f %f %f", &d1, &d2, &d3);
	a.d1 = d1;
	a.d2 = d2;
	a.d3 = d3;
	return a;
}
int cmp(const void *a ,const void *b){
	SV *x = (SV*)a;
	SV *y = (SV*)b;
	int s1 = x->d1+ x->d2+x->d3;
	int s2 = y->d1+ y->d2+y->d3;
	if(s1 >s2){
		return 1;
	}
	return -1;
}

int main(){
	while (1){
		int t;
		scanf("%d", &t);
		SV a[1000];
		if(t==1) {
			int n;
			scanf ("%d", &n);
			a[x] = add();
		}
		else if(t==2){
			int ma;
			scanf("%d ",&ma);
			ma--;
//			getchar();
			char s[100];
			gets(s);
			float a1,a2,a3;
			scanf("%f %f %f", &a1,&a2,&a3);
			strcpy(a[ma].ten, s);
			a[ma].d1 = a1;
			a[ma].d2 = a2;
			a[ma].d3 = a3;
			printf("%d\n",ma);
		}
		else if(t==3){
			
			qsort(a,x,sizeof(a[0]), cmp);
			for (int i=0;i<x;i++){
				printf("%d %s %.1f %.1f %.1f\n", a[i].ma,a[i].ten , a[i].d1, a[i].d2, a[i].d3);
			}
			break;
		}
	}
	
}
