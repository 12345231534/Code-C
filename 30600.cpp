#include <stdio.h>

void chiaHet(int n, int k){
	int s = 0;
	for (int i=2;i<=n;i++){
		int tmp =i;
		if (tmp%2==0){
			while (tmp%2==0){
				s++;
				tmp /=2;
			}
		}
		
	}
	if(s>=k){
		printf ("Yes");
		
	}else {
		printf("No");
	}
	
}

int main(){
	int n;
	int k;
	scanf ("%d %d", &n,&k);
	chiaHet(n,k);
}
