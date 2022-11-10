#include<stdio.h>
#include<string.h>
char a[5][110];
int f,n,bk[5][110];

int dx[]={0,0,-1,1,-1,1,-1,1};
int dy[]={1,-1,0,0,1,-1,-1,1};
void dfs(int x,int y)
{
	int i,xx,yy;
	if(x==1&&y==n-1)
	{
		f=1;return ;
	}
	for(i=0;i<8;i++)
	{
		xx=x+dx[i];
		yy=y+dy[i];
	   if(xx>=1&&xx<=2&&yy>=0&&yy<n&&bk[xx][yy]==0&&a[xx][yy]=='0')
	   {
		   bk[xx][yy]=1;
		   dfs(xx,yy);
	   }
	}
}




































/*
#include<bits/stdc++.h>
using namespace std;
int a[2][101];
bool flag[2][101];
int dx[]={0,0,-1,1,-1,1,-1,1};
int dy[]={1,-1,0,0,1,-1,-1,1};
int n;
int dfs(int x,int y)
{
	int xx,yy;if(x==1&&y==n-1)
		return 1;
	for(int i=0;i<8;i++){
	xx=x+dx[i];
	yy=y+dy[i];
	if(xx<0||xx>1||yy<0||yy>=n)
		continue;
	if(a[xx][yy]==0&&flag[xx][yy]==0)
	{
		flag[xx][yy]=1;
		 return dfs(xx,yy);
		 flag[xx][yy]=0;
	}
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	memset(flag,0,sizeof(flag));
	memset(a,0,sizeof(a));
	cin>>n;
	for(int m=0;m<2;m++)
		for(int j=0;j<n;j++)		
			scanf("%1d",&a[m][j]);
      if(dfs(0,0)==1) cout<<"YES"<<endl;
	  else cout<<"NO"<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[2][101];
bool flag[2][101];
int dx[]={0,0,-1,1,-1,1,-1,1};
int dy[]={1,-1,0,0,1,-1,-1,1};
int n;
int dfs(int x,int y)
{
	int xx,yy;
	if (x==1&&y==n-1)
		return 1;
	for (int i=0;i<8;i++)
	{
		xx=x+dx[i];
		yy=y+dy[i];
		if (xx<0||xx>1||yy<0||yy>n-1)
			continue;
		if (a[xx][yy]==0&&flag[xx][yy]==0)
		{
			flag[xx][yy]=1;
			return dfs(xx,yy);
			flag[xx][yy]=0;
		}
		
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	for (int i=1;i<=t;i++)
	{
		memset(flag,0,sizeof(flag));
		memset(a,0,sizeof(a));
		cin>>n;
		for (int m=0;m<2;m++)
			for (int j=0;j<n;j++)
				scanf("%1d",&a[m][j]);
		if(dfs(0,0)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}*/
