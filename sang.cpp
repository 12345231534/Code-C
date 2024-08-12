#include <stdio.h>
#include <math.h>
int a[1000000];

void sang(){
	for (int i=1;i<=1000000;i++){
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for (int i=1;i<=sqrt(1000000);i++){
		if(a[i]){
			for (int j=i*i;j<=1000000;j+=i){
				a[j] = 0;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	sang();
	int cnt=0;
	
	for (int i=2;i<=100001;i++){
		if (cnt < n){
			if(a[i]){
				cnt++;
				printf ("%d\n", i);
			}
		}
	}
}
