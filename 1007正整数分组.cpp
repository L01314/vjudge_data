#include<bits/stdc++.h>
using namespace std;
int num[105],dp[100002];
int main()
{
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		s+=num[i];
	}
	cout<<s;
	cout<<"\n";
	int sum=s/2;
	for(int i=1;i<=n;i++)
	{
		for(int j=sum;j>=num[i];j--)
		{
			dp[j]=max(dp[j],dp[j-num[i]]+num[i]);
		}
	}
	cout<<s-dp[sum]*2;
	return 0;
}
