#include <stdio.h>
#include <math.h>
int max(int a, int b){
	if (a>b) return a;
	return b;
}
int thuannghich(int n){
	int m=n;
	int tn =0;
	while(m>0){
		tn = tn*10 +m%10;
		m/=10;
	}
	if (tn==n) return 1;
	else return 0;
}
int check(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
		
	}
	return 1;
}
void sang(int l, int r){
	int prime[r-l+1];
	for (int i=0;i<=r-l+1;i++){
		prime[i] = 1;
	}
	for (int i=2;i<=sqrt(r); i++){
		for (int j= max(i*i,(l+i-1)/i*i );j<=r; j+=i){
			prime[j-l] = 0;
		}
	}
	for (int i=max(2, l); i<=r;i++){
		if(prime[i-l]){
			int flag =0;
			int s = thuannghich(i);
			int x = check(s);
			if (x ==i ){
				
				printf ("%d ", x);
				
		
			}
		}
	}
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
	int a,b;
	scanf ("%d%d", &a,&b);
	int dem =0;
	for (int i=a;i<=b;i++){
	     if (thuannghich(i) && check(i)){
	     	printf ("%d ", i);
	     	dem++;
		 }
		 if (dem ==10){
		 	printf ("\n");
		 	dem =0;
		 }
		
		}
		printf ("\n");
		
	}
	printf ("\n");
}


