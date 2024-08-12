#include <stdio.h>
#include <math.h>
 int kt(int n){
	int cnt=0;
	for (int i = 1;i <= sqrt(n);i++){
		if(n%i ==0){
			if (i*i !=n){
				if(i%2 ==0){
					cnt++;
					
				}
				if((n/i) % 2 == 0){
					cnt++;
				
				}
			}
			else{
				if(i%2 ==0){
					cnt++;
				}
			}
		}
	}
	return cnt;
}

int main (){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		scanf ("%d", &n);
		int x = kt(n);
		printf ("%d\n", x);
	
	}
}
