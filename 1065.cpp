#include <stdio.h>
#include <string.h>
int nt(int n){
	if(n == 2 || n==3 || n==5 || n==7){
		return 1;
	}
	return 0;
}

int main(){
	char a[11];
	int cnt[10]={0};
	scanf("%s", a);
	for (int i=0;i<strlen(a);i++){
		cnt[a[i]-'0']++;
	}
	for (int i=0;i<10;i++){
		if(cnt[i] !=0 && nt(i)){
			printf ("%d %d\n", i, cnt[i]);
		}
	}
}

