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
int check(int n){
	int s =0;
	while (n>0){
		s = n%10;
		if(s == 9){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int n;
	scanf ("%d", &n);
	int dem =0;
	for (int i=2;i<=n;i++){
		if(tn(i) && check(i)){
			dem++;
			printf("%d ", i);
		}
	}
	printf ("\n");
	printf("%d", dem);
}
