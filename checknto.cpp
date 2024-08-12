#include<stdio.h> 
#include<math.h> 
int nt(int n) { if(n<2) { return 0; } for(int i=2;i<=sqrt(n);i++) { if(n%i==0) { return 0; } } return 1; } int chusont( int n) { int t=0; while(n) { t=n%10; if(nt(t)==0) { return 0; break; } n/=10; } return 1; } int main () { int n; scanf("%d",&n); while(n--) { int a,b,dem=0; scanf("%d%d",&a,&b); for(int i=a;i<=b;i++) { if(nt(i) &&chusont(i)) { dem++; } } printf("%d\n",dem); } }
