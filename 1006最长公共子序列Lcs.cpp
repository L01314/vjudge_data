#include<iostream>
#include<string>
#define maxn 1003
using namespace std;
string a,b,str;
int dp[maxn][maxn],bj[maxn][maxn],m,n;
int main()
{
	cin>>a>>b;
	m=a.size(),n=b.size();
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j]) dp[i+1][j+1]=dp[i][j]+1,bj[i+1][j+1]=2;
			else if(dp[i][j+1]>=dp[i+1][j])
			{dp[i+1][j+1]=dp[i][j+1];bj[i+1][j+1]=3;}
			else 
			{
				dp[i+1][j+1]=dp[i+1][j];bj[i+1][j+1]=1;
			}
		}
	}
	while(m&&n)
	{
		if(bj[m][n]==2) str+=a[m-1],m--,n--;
		else if(bj[m][n]==1) n--;
		else m--;
	}
	for(int i=str.size()-1;i>=0;i--)
	{
		cout<<str[i];
	}
	return 0;
}

