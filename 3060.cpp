#include <stdio.h>

int kt(int n){
	int s = 0;
	while (n%2 ==0){
		s++;
		n/=2;
	}
	return s;
}
int main(){
	int n,k;
	scanf ("%d %d", &n,&k);
	int s =0;
	for (int i =2;i<=n;i++){
		s += kt(i);
	}
	if(s>=k){
		printf ("Yes");
	}
	else {
		printf ("No");
	}
}
