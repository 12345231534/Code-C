#include <stdio.h>

int nt(int n){
	if(n== 2 || n== 3 || n== 5|| n==7){
		return 1;
	}
	return 0;
}
int main(){
	long long n;
	scanf ("%lld", &n);
	int a[4];
	int a ,b,c,d;
	while (n>0){
		int s = n%10;
		if(s ==2){
			a++
		}
		else if(s ==3 ){
			b++;
		}
		else if( s == 5){
			c++;
		}
		else if( s == 7){
			d++;
		}
		n/=10;
	}
	
	
}
