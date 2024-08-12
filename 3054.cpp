#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int cat(char c){
	if(c == '0' || c== '8' || c == '9'){
		return 0;
	}
	if(c == '1'){
		return 1;
	}
	
	 return -1;
}
void solve(){
		
		char c[20];
		scanf("%s", &c);
		long long res = 0;
		int a = strlen(c);
		for (int i=0; i<a; i++){
			int x = cat(c[i]);
			if(x == -1){
				printf ("INVALID\n");
				return ;
			}
			
			res = res * 10 +x;
			
		}
		if(res ==0){
			printf("INVALID\n");
		}
		else {
			printf("%lld\n", res);
		}
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		solve();
	}
	return 0;
}
