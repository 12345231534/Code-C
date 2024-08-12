#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[100];
	char s[100];
	gets(c);
	gets(s);
	int cnt1[256] ={0};
	int cnt2[256] ={0};
	for (int i =0;i<strlen(c);i++){
		cnt1[c[i]]++;
	}
	for (int i =0;i<strlen(s);i++){
		cnt2[s[i]]++;
	}
	for (int i=0;i<256;i++){
		if(cnt1[i]!=0 && cnt2[i] ==0){
			printf ("%c", i);
		}
	}
}
