#include<stdio.h>
int main()
{
	long long n,i,t;
	int k;
	scanf("%d",&k);
	while(k--)
	{
		t=1;
		scanf("%lld",&n);
		for(i=0;i<=n;i++){
			t=t*2;
			if(t>=n) break;
		}
		if(t==n) printf("%lld\n",t-1);
			else printf("%lld\n",t/2-1);
	}
}
