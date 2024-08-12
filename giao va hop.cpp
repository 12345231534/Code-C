#include <stdio.h>
int min(int a, int b){
	if (a<b) return a;
	return b;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
	
	int n,m;
	scanf ("%d", &n);
	scanf ("%d", &m);
	int a[n], b[m];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
		
	}
	for (int i=0;i<m;i++){
		scanf ("%d", &b[i]);
	}
	int giao[min(n,m)], hop[n+m];
	int i=0,j=0,g=0,h=0;
	while (i<n&& j<m){
		if(a[i] == b[j]){
		
		hop[h++] = a[i];
		giao[g++] = a[i];
		i++;
		j++;
	    }
	    else if (a[i] < b[j]){
	    	hop[h++] = a[i];
	    	i++;
		}
		else {
			hop[h++] = b[j];
			j++;
		}
	}
	while (i<n) {
		hop[h++] = a[i++];
	}
	while (j<m) {
		hop[h++] = b[j++];
	}
	
	
	for (int i=0;i<h;i++){
		printf ("%d ", hop[i]);
	}
	printf ("\n");
	for (int i=0;i<g;i++){
		printf ("%d ", giao[i]);
	}
	printf ("\n");
}
}
