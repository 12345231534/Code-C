#include <stdio.h>

int main(){
	int t;
	scanf ("%d", &t);
	t--;
	int x=t;
	int a[100000]={0};
	while (t--){
		int n,m;
		
		scanf ("%d %d", &n,&m);
		a[n]++;
		a[m]++;
	
	}
	for (int i=1;i<100000;i++){
		
		if(a[i] ==x){
			printf("Yes");
			return 0;
		}	
	}
	printf("No");
}
