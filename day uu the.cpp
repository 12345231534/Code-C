#include <stdio.h>
int main(){
	int n=0;// dem so luong phan tu
	
	char kitu = ' ';
	int c=0,l=0;
	while (kitu != '\n'){
		int x; scanf ("%d", &x);
		n++;
		if (n%2==0) {
			c++;
		}
		else l++;
		kitu = getchar();// doc ki tu sau khi nhap
		
	}
	if (n%2==0 && c>l || n%2!=0 && c<l){
		printf ("YES\n");
	}
	else printf ("NO\n");
}
