#include <stdio.h>
#include <math.h>
int check (double a, double b, double c){
	if(a==0 || b==0 || c==0){
		return 0;
	}
	if(a+b <= c || a+c <=b || c+b <=a){
		return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		double a1,a2,b1,b2,c1,c2;
		scanf ("%lf%lf%lf%lf%lf%lf", &a1,&a2, &b1,&b2, &c1,&c2);
		double d1 = sqrt((b1-a1)* (b1-a1) + (b2-a2)*(b2-a2));
		double d2 = sqrt((c1-a1)* (c1-a1) + (c2-a2)*(c2-a2));
		double d3 = sqrt((b1-c1)* (b1-c1) + (b2-c2)*(b2-c2));
		
		if(check(d1,d2,d3)){
			double  p= (d1+d2+d3)/2;
			double s = sqrt(p*(p-d1)*(p-d2)*(p-d3));
			printf("%.2f\n", s);
		}
		else printf("INVALID\n");
	}
}
