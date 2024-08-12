#include <stdio.h>
#include <math.h>
int cnt[10001] = {0};
int check(int n){
	if (n==1) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main (){
	int t;
	scanf ("%d", &t);
	for (int i=1;i<=t;i++){
		int n;
		scanf ("%d", &n);
		int a[n];
		for (int i=0;i<n;i++){
			scanf ("%d", &a[i]);
		}
		for (int i=0;i<n;i++){
			for (int j=1;j<n;j++){
				if (a[i] < a[j]){
					int x = a[i];
					a[i] = a[j];
					a[j] = x;
				}
			}
		}
		for (int i=0;i<n;i++){
			cnt[a[i]]++;
		}
		printf ("Test %d:\n", i);
		for (int i=0;i<n;i++){
			if (check(a[i]) && cnt[a[i]] != 0){
				printf ("%d xuat hien %d lan\n", a[i], cnt[a[i]]);
				cnt[a[i]]=0;
			}
		}
	}
}
