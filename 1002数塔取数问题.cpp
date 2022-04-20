#include<stdio.h>
#include<string.h>
int num[501][501],dp[501][501];
int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}

int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		dp[n][i]=num[n][i];
	}
	for(j=n-1;j>=1;j--)
	{
		for(i=j;i>=1;i--)
		{
			dp[j][i]=max(num[j][i]+dp[j+1][i],num[j][i]+dp[j+1][i+1]);
		}
	}
	printf("%d",dp[1][1]);
	
	return 0;
	
}
