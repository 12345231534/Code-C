#include <stdio.h>
int cnt[101] ={0};
int cnt2[101] = {0};
int main (){
	int n;
	scanf ("%d", &n);
	int a[n];
	
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	for (int i=0;i<n;i++){
		cnt[a[i]]++;
		cnt2[a[i]]++;
	}
	int dem =0;
	for (int i=0;i<n;i++){
		if (cnt2[a[i]] >1){
			dem++;
			cnt2[a[i]]=0;
		}
	}
	printf ("%d\n",dem);
	for (int i=0;i<n;i++){
		if (cnt[a[i]] >1){
			printf ("%d ", a[i]);
			cnt[a[i]] =0;
		}
	}
}
