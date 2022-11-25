#include<stdio.h>
#define mod 1000000007
#define ll long long 
ll pow(ll a ,ll m) {
	ll res=1;
	while(m){
		while(m%2==0){
			a=(a*a)%mod;
			m/=2;
		}
		res=(res*a)%mod;
		m--;
	}
	return res;
}
int main() {
	ll a[3000]={1},b[3000]={1},n,m;
	for(ll i=1;i<3000;i++){
		a[i]=(a[i-1]*i)%mod;
		b[i]=(b[i-1]*pow(i,mod-2))%mod;
	}
	scanf("%lld%lld",&n,&m);
	printf("%lld\n",a[n]%mod*b[m]%mod*b[n-m]%mod);
}
