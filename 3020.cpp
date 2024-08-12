#include <stdio.h>
#include <math.h>
int tn(int n){
	int m =n;
	int s = 0;
	while (n>0){
		s = s*10 + n%10;
		n/=10;
	}
	if(s==m){
		return 1;
	}
	return 0;
}
int tong(int n){
	int s =0;
	while (n>0){
		s += n%10;
		n/=10;
	}
	if (s%10==8){
		return 1;
	}
	return 0;
}
int check(int n){
	int s =0;
	while (n>0){
		s = n%10;
		if(s == 6){
			return 1;
		}
		n/=10;
	}
	return 0;
}
int main(){
	
		int n,m;
		scanf ("%d%d", &n,&m);
		if (n>m){
			int tmp =n;
			n=m;
			m= tmp;
		}
		int dem =0;
		for(int i=n;i<=m;i++){
			if(tn(i) && tong(i) && check(i)){
				printf ("%d ", i);
			}
		}
		
	
}
