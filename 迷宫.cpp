#include<stdio.h>
int n,m,f=0;
int min=10000;
int time=0;
char a[12][12]; int book[12][12]={0};
int next[4][2] = { {0,1},{1, 0},{0,-1},{ -1,0} };
void dfs(int x, int y,int time)
{   
        if(time+1>min) return ;
		if(a[x][y]=='T') 
		{
			f=1;
			 
//			for(int i=0;i<n;i++)
//			{
//				for(int j=0;j<m;j++)
//				{
//					printf("%d",book[i][j]);
//				}
//				printf("\n");
//			}
//			读取项目走的路径
			if(min>time)
			{
				min=time;
			}return ;
		}
 
	if (!(x >= 0 && x < n && y >= 0 && y < m) || a[x][y] == '*' || book[x][y] == 1)
		return; 
	for (int i = 0; i < 4; i++) {
		book[x][y] = 1;
		int tx = x + next[i][0]; int ty = y + next[i][1]; 
		dfs(tx, ty,time+1);
		book[x][y] = 0;
	}
	return;
}
int main()
{
	int x,y;
	scanf("%d%d",&n, &m);
	for (int i = 0; i < n; i++) {
		getchar();
		for (int j = 0; j < m; j++) {
			scanf("%c", &a[i][j]); 
			if (a[i][j] == 'S')
			{
				x = i; y = j;
			}
		}
	}
	dfs(x, y, 0 ); 
	if (f == 1)
		printf("%d\n",min); 
	else
		printf("-1\n"); 
	
	return 0;
}







































//
//#include<stdio.h>
//int foot=0,f=0;
//int n,m,i,j,k,book[12][12],x,y;
//int min=10000,time=0;
//int ty,tx,next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
//char a[12][12]={0};
//void dfs(int x,int y,int time)
//{
//	if(time+1>min) return ;
//	if(a[x][y]=='T') 
//	{
//		f=1;
//		if(min>time)
//		{
//			min=time;
//		}return ;
//	}
//	if(a[x][y]=='*'||book[x][y]==1) return ;
//	for (int i = 0; i < 4; i++) {
//		int tx = x + next[i][0]; int ty = y + next[i][1];
//		dfs(tx, ty,time+1);
//		
//	}
//	return ;
//}
//int main()
//{
//	scanf("%d%d",&n,&m);
//	for(i=0;i<n;i++)
//	{
//		getchar();
//		for(j=0;j<m;j++)
//		{
//			scanf("%c",&a[i][j]);
//			if(a[i][j]=='s')
//			{
//				x=i;y=j;
//			}
//		}
//	}
//	dfs(x,y,time);
//	if(f==1) printf("%d",min);
//	else printf("-1");
//}
