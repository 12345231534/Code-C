#include <stdio.h>
#include <string.h>
int check(char c[]){
	int n = strlen(c);
	for (int i=1;i<n/2;i++){
		if((c[i] - '0') != c[n-i-1] - '0'){
			return 0;
		}
	}
	int a = c[0] - '0';
	int b = c[n-1] - '0';
	if (a/b == 2 || b/a == 2){
		return 1;
	}
	else{
		return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		char c[20];
		scanf ("%s", &c);
		int n= strlen(c);
		if(check(c)){
			printf ("YES\n");
		}
		else {
			printf ("NO\n");
		}
		
	}
}
