#include<iostream>
#include<cstdio>
using namespace std;
int c[2005][2005],n,m;

int main()
{
	cin>>n>>m;
	for(int i=0;i<=n;i++)c[i][0]=1;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=i;j++)
			c[i][j]=(c[i-1][j-1]+c[i-1][j])%1000000007;
	cout<<c[n][m];
	return 0;
}

