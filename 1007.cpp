#include <stdio.h>
int main(){
	int a,b;
	scanf ("%d %d", &a, &b);
	int tong = a+b;
	int hieu = a-b;
	long long tich = (long long)a*b;
	int  chiaNguyen = a/b;
	int chiadu = a%b;
	double chiaThuc = (double)a/b;
	
	printf ("%d\n%d\n%lld\n%d\n%d\n%.2f", tong, hieu, tich,chiaNguyen, chiadu, chiaThuc);

}
