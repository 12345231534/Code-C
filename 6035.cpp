#include <stdio.h>
#include <string.h>
#include <ctype.h>

int cn (char c[]){
	int l=0, r =strlen(c)-1;
	int dem =0;
	while (l<r){
		if(c[l] != c[r] )dem++;
		l++;
		r--;
	}
	return dem;
}

int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		char s[105];
		scanf("%s", s);
		int cnt = cn(s);
		int n = strlen(s);
		if(n%2 ==0 && cnt ==1 || (n%2 ==1 && cnt <=1)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
