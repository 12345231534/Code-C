#include <stdio.h>
#include <math.h>
int kt(int b){
	for(int i=2;i<=sqrt(b);i++){
		if(b%i==0)
		return 0;
	}
	return b>1;
}

int main(){
	 int n,dem=0;
	 scanf("%d",&n);
	 int a[n];
	 for(int i=0;i<n;i++){
	 	scanf("%d",&a[i]);
	 }
	 for(int i=0;i<n;i++){
	 	if(kt(a[i])){
	 		dem++;
	 	}
	 }
	 printf("%d ",dem);
	 for(int i=0;i<n;i++){
	 	if(kt(a[i])){
	 		printf("%d ",a[i]);
	 	}
	 }
}
