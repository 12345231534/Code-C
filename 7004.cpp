#include <stdio.h>

struct PhanSo{
	int a, b;
};
typedef struct PhanSo PS;
int gcd(int a, int b){
	if(b==0){
		return a;
	}
	else return gcd(b,a%b);
}
int lcm(int a, int b){
	return a*b/gcd(a,b);
}
PS rutGon(int n, int m){
	int x = gcd(n,m);
	int a= n/x;
	int b = m/x;
	PS ps1;
	ps1.a = a;
	ps1.b = b;
	return ps1;
}
void quyDong(PS ps5, PS ps6){
	
	PS ps1 = rutGon(ps5.a,ps5.b);
	PS ps2 = rutGon(ps6.a,ps6.b);
	int bcnn= lcm(ps1.b,ps2.b);
	int s1 = bcnn/ps1.b;
	int s2 = bcnn/ps2.b;
	int x = ps1.a * s1;
	int y = ps1.b * s1;
	int x1 = ps2.a * s2;
	int y1 = ps2.b * s2;
	PS ps3 = rutGon(x+x1, y1);
	PS ps4 = rutGon(x*y1, x1*y);
	printf("%d/%d %d/%d\n",x,y,x1,y1);
	printf("%d/%d\n",ps3.a,ps3.b);
	printf("%d/%d\n",ps4.a,ps4.b);
}
int main(){
	int t;
	scanf ("%d", &t);
	for (int i=1;i<=t;i++){
		int a, b, c,d;
		scanf ("%d %d %d %d", &a,&b,&c,&d);
		printf ("Case #%d:\n",i);
		PS ps1; 
		PS ps2;
		ps1.a = a;
		ps1.b = b;
		ps2.a = c;
		ps2.b = d;
		quyDong(ps1, ps2);
	}
}
