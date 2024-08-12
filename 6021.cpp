#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


void solve (){
	char a[1001];
	scanf("%s", a);
	int n = strlen(a);
	if (a[0] == '0') {
		printf("INVALID");
		return ;
	}
	int c =0,l=0;
	for (int i=0;i<n;i++){
		if(isalpha(a[i])) {
			printf("INVALID");
			return ;
		}
		else if((a[i]-'0')%2 ==0){
			c++;
		}
		else {
			l++;
		}	
	}
	if(c==l){
		printf("NO\n");
		return;
	}
	if((c>l && n%2==0) || (l>c && n%2 ==1)){
		printf("YES");
		} 
	else printf("NO");
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		solve();
		printf("\n");
	}
}
