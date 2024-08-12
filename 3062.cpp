#include <math.h>
#include <stdio.h>
typedef long long ll;
ll GCD(ll a, ll b)
{
    while (b != 0)
    {
        ll x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long n,m;
		scanf("%lld %lld", &n, &m);
		ll res =n;
		for (ll i=n;i<=m;i++){
			ll uoc = GCD(res,i);
			res = res*i/uoc;
		}
		printf("%lld\n", res);
	}
}
