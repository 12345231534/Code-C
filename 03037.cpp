#include <stdio.h>
#include <math.h>

void pt(int n){
	int s1,s2,s3,s4;
	while (n>0){
		int s = n%10;
		if (s == 2){
			s1++;
		}
		else if (s == 3){
			s2++;
		}
		else if (s == 5){
			s3++;
		}
		else if (s == 7){
			s4++;
		}
		n/=10;	
		printf ("%d    ", s);
	}
	printf("%d %d %d %d\n", s1,s2,s3,s4);
	if (s1 > 0){
		printf ("2 %d\n", s1);
	}
	if (s2 > 0){
		printf ("3 %d\n", s2);
	}
	if (s3 > 0){
		printf ("5 %d\n", s3);
	}
	if (s4 > 0){
		printf ("7 %d\n", s4);
	}
}

int main(){
	long long n;
	scanf ("%lld", &n);
	pt(n);
}

