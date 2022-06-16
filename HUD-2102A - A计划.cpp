#include<iostream>
#include<cstdio>
using namespace std;
char data[2][15][15];
int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
int n,m,T;

int dfs(int x,int y,int z,int t)
{
	if(t<0)return 0;
	if(data[z][x][y]=='#')z^=1;
	char &c=data[z][x][y];
	if(c=='P') return 1;
	if(c=='#'||c=='*') return 0;
	c='*';
	for(int i=0;i<4;i++)
	{
		int x1=x+dx[i],y1=y+dy[i];
		if(x1>=0&&x1<n&&y1>=0&&y1<m)
			if(dfs(x1,y1,z,t-1)) return 1;
	}
	c='.';
	return 0;
}
int main()
{
	int k;
	cin>>k;
	while(k--)
	{
		cin>>n>>m>>T;
		for(int i=0;i<n;i++) scanf("%s",data[0][i]);
		for(int i=0;i<n;i++) scanf("%s",data[1][i]);
		data[0][0][0]='.';
		if(dfs(0,0,0,T))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

