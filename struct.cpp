#include <stdio.h>
#include <stdlib.h>
struct struct_name{
	//data
};

struct sinhVien{
	char ten[20];
	float gpa;

};
typedef struct sinhVien SV;
// ham nhap
SV add(){
	getchar();
	SV a;
	gets(a.ten);
	scanf("%f", &a.gpa);
	return a;
}

void in(SV a){
	printf ("%s %.2f\n", a.ten, a.gpa);
}
int cmp(const void *a, const void *b){
	SV *x = (SV*)a;
	SV *y = (SV*)b;
	if(x->gpa <y->gpa) return 1;
	return -1;
}
void timKiem(SV a[], int n){
	int res =0, pos;
	for (int i=0;i<n;i++){
		if(a[i].gpa > res){
			res = a[i].gpa;
			pos =i;
		}
	}
	in(a[pos]);
}
int main(){
	SV a[100];
	int n;
	scanf ("%d", &n);
	
	for (int i=0;i<n;i++){
		a[i] = add();
	}
	qsort(a,n,sizeof(a[0]), cmp);
	for (int i=0;i<n;i++){
		in(a[i]);
	}
	
}
