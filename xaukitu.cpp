#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void demTanXuat(char c[]){
	
	int cnt[256]={0};
	for (int i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	}
	for (int i=0;i<256;i++){
		if(cnt[i] !=0){
			printf ("%c %d\n", i, cnt[i]);
		}
	}
}
void tanXuatLonNhat(char c[]){
	int cnt[256] = {0};
	for (int i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	}
	int max = -1e9;
	char kt;
	for (int i=0;i<256;i++){
		if(cnt[i] >= max){
			max = cnt[i];
			kt = i;
		}
	}
	printf("%c", kt);
}
int main(){
	char c[1000];
	gets(c);
	tanXuatLonNhat(c);
}
