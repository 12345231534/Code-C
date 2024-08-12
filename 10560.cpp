#include <stdio.h>
#include <string.h>

void solve(){
		char s[18];
		scanf("%s", &s);
		int n = strlen(s);
		int oke = 1;
		for (int i=0;i<n;i++){
			if (s[i] < s[i+1]){
				oke =0;

			}
		}
		if (oke){
			printf ("YES");
		}
		else {
			printf ("NO");
		}
		printf ("\n");
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		solve();
	}
}
