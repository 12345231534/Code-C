#include <stdio.h>
int main(){
	int n;
	scanf ("%d", &n);
	int chan=0, le=0;
	while (n>0){
		int s = n%10;
		if (s%2==0) chan++;
		else le++;
		n/=10;
	}
	printf ("%d %d", le, chan);
}
