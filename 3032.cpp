#include <stdio.h>
#include <math.h>
int nt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return n>1;
}
int check(int n){
	int s =0;
	while (n>0){
		s = n%10;
		if (nt(s) ==0){
			return 0;
			break;
		}
		
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int a, b;
		int dem =0;
		scanf ("%d %d", &a, &b);
		for (int i=a;i<=b;i++){
			if (nt(i) && check(i)){
				
				dem++;
			}
			
		}
		printf ("%d\n", dem);
		
	}
}

