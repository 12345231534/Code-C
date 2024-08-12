#include <stdio.h>
int main(){
	unsigned int a,b;
	
	scanf ("%d %d", &a, &b);
	if (b==0){
		printf("0");
		return 0;
	}
	int tong = a+b;
	int hieu = a-b;
	int tich = a*b;
	double chiaThuc = (double)a/b;
	int chiadu = a%b;
	printf ("%d %d %d %.2f %d", tong, hieu, tich,chiaThuc, chiadu);

}
