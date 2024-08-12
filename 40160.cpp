#include <stdio.h>
#include <math.h>
int kt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i ==0){
			return 0;
		}
	}
	return n>1;
}

int main(){
	int t;
	scanf("%d", &t);
	for(int v =1;v<=t;v++){
		int n;
		scanf("%d", &n);
		int a[n], b[100001] = {};
		for (int i=0;i<n;i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		for (int i=0 ;i<n-1;i++){
			for(int j = i+1; j<n; j++){
				if(a[i] > a[j]){
					int tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
		}
		
		printf("Test %d:\n", v);
		for (int i=0;i<n;i++){
			if(b[a[i]] >= 1 && kt(a[i])){
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]] =0;
			}
		}
	}
}
