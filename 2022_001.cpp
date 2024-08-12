#include <stdio.h>

int main(){
	int u0, d,n;
	scanf("%d%d%d", &u0, &d,&n);
	int s=0;
	for (int i=0;i<n;i++){
		s+=u0;
		u0+=d;
	}
	printf("%d", s);
}
