#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
typedef pair<int,int> PII;
const int N=210;
char g[N][N];
int da[N][N],db[N][N];
int n,m;
int dx[]={-1,1,0,0},dy[]={0,0,-1,1};


void bfs(int sx,int sy,int d[][N])
{
	 memset(d,0x3f,sizeof da);
	 queue<PII> q;
	 q.push({sx,sy});
	 d[sx][sy]=0;
	 while(!q.empty())
	 {
		 PII t=q.front();
		 q.pop();
		 int x=t.first,y=t.second;
		 for(int i=0;i<4;i++)
		 {
			 int a=x+dx[i],b=y+dy[i];
			 if(a>=1&&a<=n&&b>=1&&b<=m&&d[a][b]==0x3f3f3f3f&&g[a][b]!='#')
              d[a][b]=d[x][y]+1,q.push({a,b});
		 }
	 }
}


int main()
{
	int i,j;
	while(~scanf("%d %d",&n,&m))
	{
		for(i=1;i<=n;++i) scanf("%s",g[i]+1);
		for(i=1;i<=n;++i)
			for(j=1;j<=m;++j)
				if(g[i][j]=='Y')
					bfs(i,j,da);
		        else if(g[i][j]=='M')
					bfs(i,j,db);
				int res=0x3f3f3f3f;
				for(i=1;i<=n;++i)
					for(j=1;j<=m;++j)
						if(g[i][j]=='@')
				res=min(res,da[i][j]+db[i][j]);
				printf("%d\n",res*11);
				
	}
	return 0;
}
