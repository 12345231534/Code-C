#include <stdio.h>
#include <math.h>
int nt(int n){
	if (n==0 || n==1) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0)return 0; 
	}
	return n>1;
}
int main(){
	int n;
	scanf("%d", &n);
	int cnt =0;
	int i =0;
	while (cnt <n){
		if(nt(i)){
			printf("%d\n", i);
			cnt++;
		}
		i++;
	}
}