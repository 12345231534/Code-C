#include <stdio.h>
int main(){
	int n,dem;
	scanf("%d",&n);
	int a[n],b[100] = {};
	for(int i=0;i<n;i++){
		scanf("%d",a[i]);
		b[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(b[a[i]]==1){
			dem++;
		}
	}
	printf("%d\n", dem);
	for(int i=0;i<n;i++){
		if(b[a[i]]==1){
			printf("%d ",a[i]);
		}
	}
}
