#include <stdio.h>
#include <stdlib.h>
struct sinhvien{
	float gpa;
	int sl;
};
typedef struct sinhvien SV;
SV add(){
	SV a;
	scanf ("%f", &a.gpa);
	scanf("%d", &a.sl);
	return a;
}
void in(SV a){
	printf("%.2f %d\n", a.gpa, a.sl);
}
int cmp(const void *a, const void *b){
	SV *x = (SV*)a;
	SV *y = (SV*)b;
	if(x->gpa < y->gpa){
		return -1;
	}
	else if(x->gpa == y->gpa) {
		if(x->sl < y->sl){
			return -1;
		}
	}
}

int main(){
	SV a[3];
	for (int i =0;i<3;i++){
		a[i] = add();
	}
	qsort(a,3,sizeof(a[0]), cmp);
	for (int i=0;i<3;i++){
		in(a[i]);
	}
}
