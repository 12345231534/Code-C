#include <stdio.h>
#include <math.h>

int nt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int tong(int n){
	int s =0;
	while (n>0){
		s += n%10;
		n/=10;
	}
	if(s%5==0){
		return 1;
	}
	return 0;
}
int main(){
	int n;
	scanf ("%d", &n);
	int dem =0;
	for (int i=2;i<=n;i++){
		if(tong(i) && nt(i)){
			dem++;
			printf("%d ", i);
		}
	}
	printf ("\n");
	printf("%d", dem);
}
