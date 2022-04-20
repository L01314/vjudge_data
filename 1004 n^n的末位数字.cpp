//方法1
/*
#include<stdio.h>
int main()
{
	int x,i,t;
	scanf("%d",&x);
	i=x%4;
	t=x%10;
	if(i==0){printf("%d",t*t*t*t%10);}
    else if(i==1){printf("%d",t);}
	else if(i==2){printf("%d",t*t%10);}
	else if(i==3){printf("%d",t*t*t%10);}
    return 0;
}
*/
//方法2

#include<stdio.h>
#include<math.h>
long long n;
int main()
{
	scanf("%lld",&n);
	int a=n%10;
	int b=n%4;
	if(b==0)
	{
		b=4;
	}
	b=pow(a,b);
	printf("%d",b%10);
}



/*

#include<bits/stdc++.h>
using namespace std;
long long qpow(long long a,long long b,long long c)
{
	long long res=1;
	a%=c;
	while(b)
	{
		if(b&1)
		{
			res=res*a%c;
		}
		a=a*a%c;
		b>>=1;
	}
	return res;
}
int main()
{
  long long a,b;
  cin>>a;
  cout<<qpow(a,a,10)<<endl;
  return 0;
}
*/
