#include <stdio.h>

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

int main(){
	int n;
	scanf("%d", &n);
	SV a[n];
	for (int i=0;i<n;i++){
		a[i] = add();
	}
	float max_val = 0;
	for (int i=0;i<n;i++){
		float x = a[i].d1+a[i].d2+a[i].d3;
		if(x > max_val){
			max_val = x;
		}
	}
	for (int i=0;i<n;i++){
		if(max_val == a[i].d1+a[i].d2+a[i].d3)
		printf("%d %s %s %.1f\n", a[i].ma, a[i].ten, a[i].ngaySinh, a[i].d1+a[i].d2+a[i].d3);
	}
}
