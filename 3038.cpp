#include <stdio.h>
#include <math.h>

int uoc3(int n, int p){
	int cnt =0;
	while (n%p ==0){
		
			cnt++;
			n/=p;
		
	
	}
	return cnt;
}
int uoc(int n, int p){
	int dem =0;
	for (int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			if(i==p){
				dem++;
			}
			n/=i;
		}
	}
	if(n==p){
		dem++;
	}
	return dem;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n,p;
		scanf ("%d%d", &n,&p);
		int s =0;
		for (int i=1;i<=n;i++){
			if(i%p==0){
				s+=uoc3(i,p);
			}
		}
		printf ("%d\n", s);
	}
}
