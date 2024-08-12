#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void solve(){
	char s[1001];
	scanf ("%s", s);
	int n =strlen(s);
	if((s[0]-'0' == 0)) {
		printf ("INVALID");
		return;
	}
	for (int i=0;i<n;i++){
		if(isalpha(s[i])){
			printf ("INVALID");
			return;
		}
	}
	int a[10]={0};
	for (int i=0;i<n;i++){
		a[s[i]-'0']++;
	}
	for (int i=0;i<10;i++){
		if(a[i] ==0){
			printf ("NO");
			return;
		}
	}
	printf("YES");
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while (t--){
		solve();
		printf("\n");
	}
}
