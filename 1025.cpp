#include <stdio.h>

int min(int a,int b){
	if(a<b) return a;
	else return b;
}
int max (int a,int b){
	if (a>b) return a;
	else return b;
}
int main(){
	int a,b,c,d;
	int a1,b1,c1,d1;
	scanf("%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&a1,&b1,&c1,&d1);
	int xmin= min(a,a1);
	int ymin = min(b,b1);
	int xmax= max(c,c1);
	int ymax = max(d,d1);
	int x = xmax-xmin;
	int y = ymax-ymin;
	int s = max(x,y);
	int smax = s*s;
	printf("%d", smax);
}

