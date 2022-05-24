#include<stdio.h>
int n,m,i,j,k,tx,ty,x,y;
int bb=0;
int a[21][21],book[21][21];
char c[21][21];
int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
void dfs(int x,int y,int bb)
{ 
	
	if(!(x>=0&&x<n&&y>=0&&y<m)||c[x][y]=='.'||book[x][y]==1) return ;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		book[x][y]=1;
		tx=x+next[i][0];ty=y+next[i][1];
		dfs(tx,ty,bb+1);
		
	}
	return ;
}
int main()
{
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		getchar();
		for(j=0;j<m;j++)
		{
			scanf("%c",&c[i][j]);
			if(c[i][j]=='@')
			{
				x=i;y=j;
			}
			
		}
	}
	dfs(x,y,0);
	printf("%d\n",bb);
	return 0;
}
