#include<stdio.h>
int main()
{
	int n,s=0;
	scanf("%d",&n);
  long long c=n;
	while(n>=3)
	{
	
		s=n/3;
	    c+=s;
		n=s+n%3;
	}
	printf("%lld",c);
}
