#include <stdio.h>
int a[10] = {1000, 500, 200, 100, 50, 20 ,10, 5, 2, 1};
int main (){
	int n;
	scanf ("%d", &n);
	int cnt =0;
	for (int i=0;i<10;i++){
		cnt += n/a[i];
		n %= a[i];
	}
	printf ("%d", cnt);
}
