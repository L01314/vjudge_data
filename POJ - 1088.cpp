#include<stdio.h>
int dp[1010][1010];
int a[1010][1010];
int d[4][2]={0,1,1,0,-1,0,0,-1};
int m,n,sum=0;
int max(int a,int b)
{
	if(a>=b) return a;
	else   return b;
}

int dfs(int x,int y)
{
  if(dp[x][y]!=0) return dp[x][y];
  
  for(int i=0;i<4;i++){
	  int tx=x+d[i][0];
	  int ty=y+d[i][1];
	  if(tx<1||ty<1||tx>m||ty>n||a[x][y]<=a[tx][ty])
		  continue;
	  dp[x][y]=max(dp[x][y],dfs(tx,ty)+1);
  }
	return dp[x][y];
}
int main()
{
    int m,n;
    	scanf("%d %d",&m,&n);
	    for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
	    scanf("%d",&a[i][j]);
	
	
	
     	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		sum=max(sum,dfs(i,j));
		
	
	printf("%d",sum+1);
	return 0;
}
