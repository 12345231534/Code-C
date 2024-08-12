#include <stdio.h>
#include <stdlib.h>
struct SinhVien{
	int ma;
	char ten[100];
	char ngaySinh[100];
	float d1,d2,d3;
};
typedef struct SinhVien SV;
int x =1;
SV add(){
	getchar();
	SV a;
	a.ma =x;
	x++;
	gets(a.ten);
	gets(a.ngaySinh);
	float d1,d2,d3;
	scanf("%f %f %f", &d1, &d2, &d3);
	a.d1 = d1;
	a.d2 = d2;
	a.d3 = d3;
	return a;
}

int cmp (const void *a, const void *b){
	SV *x = (SV*)a;
	SV *y = (SV*)b;
	int n = x->d1+x->d2+x->d3;
	int m = y->d1+y->d2+y->d3;
	if(n!=m) {
		return n<m;
	}
	return x->ma > y ->ma;
}
int main(){
	int n;
	scanf("%d", &n);
	SV a[n];
	for (int i=0;i<n;i++){
		a[i] = add();
	}
	qsort(a,n,sizeof(a[0]), cmp);
	for (int i=0;i<n;i++){
		printf("%d %s %s %.1f\n", a[i].ma, a[i].ten, a[i].ngaySinh, a[i].d1+a[i].d2+a[i].d3);
	}
}
