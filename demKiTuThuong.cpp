#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[100];
	gets(c);
	int cnt[26] = {0};
	for (int i=0;i<strlen(c);i++){
		cnt[c[i]-'a']++;
	}
	for (int i=0;i<26;i++){
		if(cnt[i] !=0){
			printf ("%c %d\n", i+'a',cnt[i]);
		}
	}
}
