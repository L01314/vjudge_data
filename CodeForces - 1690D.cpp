#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;

const int N=2e5+10;
int n,m,k;
char a[N];
int s[N];
void sbwangyun();


int main()
{
	scanf("%d",&n);
    sbwangyun();
	return 0;
}

void sbwangyun()
{
	while(n--)
	{    int ans=0xfffffff;
		scanf("%d %d",&m,&k);
		scanf("%s",a+1);
		for(int i=1;i<=m;i++)
		{
			
			if(a[i]=='B')s[i]=0;
			else s[i]=1;
			
		} 
		
		for(int i=1;i<=m;i++)
			
			s[i]+=s[i-1];
		
		for(int i=k;i<=m;i++)
		{
			
			int t=s[i]-s[i-k];
			ans=min(ans,t);
			
		}
		printf("%d\n",ans);
	}
}
