#include <stdio.h>
#include <math.h>
int main(){
	int dem2=0, dem3=0,dem5=0,dem7=0;
	long long n;
	scanf ("%lld", &n);
	while (n>0){
		int s = n%10;
		n/=10;
		switch(s){
			case 2 :
				dem2++;
				break;
			case 3 : 
			    dem3++;
			    break;
			case 5 :
				dem5++;
				break;
			case 7 :
				dem7++;
				break;
		}
		
	}
	if (dem2 !=0) printf ("2 %d\n", dem2);
	if (dem3 !=0) printf ("3 %d\n", dem3);
	if (dem5 !=0) printf ("5 %d\n", dem5);
	if (dem7 !=0) printf ("7 %d\n", dem7);

}
