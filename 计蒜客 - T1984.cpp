#include<stdio.h>
typedef long long LL;
LL n,m,p=1000000007;

LL quick_mod(LL a,LL b)
{
	 LL ans=1;
	 a=a%p;
	 while(b){
		 if(b&1){//
			 ans=ans*a%p;
			 b--;
		 }
		 b>>=1;
		 a=a*a%p;
	 }
	 return ans;
}


LL c(LL n,LL m)
{
	if(m>n) return 0;
	LL ans=1;
	for(int i=1;i<=m;i++){
		LL a =(n+i-m)%p;
		LL b=i%p;
		ans=ans*(a*quick_mod(b,p-2)%p)%p;
	}
	return ans;
}
LL T1984(LL n,LL m)
{
	if(m==0) return 1;
	return c(n%p,m%p)*T1984(n/p,m/p)%p;
}
int main()
{
	scanf("%lld%lld",&n,&m);
	printf("%lld\n",T1984(n,m));
	return 0;
}

