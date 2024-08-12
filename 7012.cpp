#include <stdio.h>
#include <stdlib.h>
struct matHang{
	int ma;
	char ten[100];
	char loai[100];
	float giaMua;
	float giaBan;
};
int x =1;
typedef struct matHang MH;
MH add(){
	getchar();
	MH a;
	a.ma = x;
	x++;
	gets(a.ten);
	gets(a.loai);
	float giaMua, giaBan;
	scanf("%f %f", &giaMua, &giaBan);
	a.giaMua = giaMua;
	a.giaBan = giaBan;
	return a;
}
int cmp(const void *a, const void *b){
	MH *x = (MH*)a;
	MH *y = (MH*)b;
	int n = x->giaBan-x->giaMua;
	int m = y->giaBan-y->giaMua;
	return n<m;
}

int main(){
	int n;
	scanf("%d",&n);
	MH a[n];
	
	for (int i=0;i<n;i++){
		a[i] = add();
	}
	qsort(a,n,sizeof(a[0]), cmp);
	for (int i=0;i<n;i++){
		printf("%d %s %s %.2f\n", a[i].ma, a[i].ten, a[i].loai, a[i].giaBan-a[i].giaMua);
	}
}
