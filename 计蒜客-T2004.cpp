#include<iostream>
using namespace std;

long long c[1010][1010];
long long a,b,k,n,m;
int main()
{
	cin>>a>>b>>k>>n>>m;
	c[1][1]=1;
	
	    for(int i=2;i<=k+1;i++){
		for(int j=1;j<=i;j++)
			c[i][j]=(c[i-1][j-1]*b+c[i-1][j]*a)%10007;
		}
		cout<<(c[k+1][m+1]);
return 0;
} 

//https://vjudge.d0j1a1701.cc/problem/%E8%AE%A1%E8%92%9C%E5%AE%A2-T2004
