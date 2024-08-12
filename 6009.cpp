#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int t1(int a[], int n){
	for (int i=0;i<n-1;i++){
		if(a[i] != a[i+1]){
			return 0;
		}
	}
	return 1;
}
int t2 (int a[], int n){
	for (int i=0;i<n-1;i++){
		if(a[i] >= a[i+1]){
			return 0;
		}
	}
	return 1;
}
int t3 (int a[], int n){
	for (int i=0;i<2;i++){
		if(a[i] != a[i+1]){
			return 0;
		}
	}
	if(a[3] !=a[4]) return 0;
	return 1;
}
int t4 (int a[], int n){
	for (int i=0;i<n;i++){
		if(a[i] !=6 && a[i] != 8){
			return 0;
		}
	}
	return 1;
}
void solve(){
	char c[20];
	gets(c);
	int a[5];
	a[0] = c[6] - '0';
	a[1] = c[7] - '0';
	a[2] = c[8] - '0';
	a[3] = c[10] - '0';
	a[4] = c[11] - '0';
	
	if(t1(a,5) || t2(a,5) || t3(a,5) || t4(a,5)) {
		printf("YES\n");
			
	}
	else {
		printf ("NO\n");
	}
}

int main(){
	int t;
	scanf ("%d", &t);
	getchar();
	while (t--){
		
		solve();
	}
}

