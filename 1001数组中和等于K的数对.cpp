#include<bits/stdc++.h>
using namespace std;
int n,k,x,id;
bool flag=0;
int a[100010];
int main()
{
	scanf("%d%d",&k,&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		id=lower_bound(a+i,a+n,k-a[i])-a;
		if(id!=i&&a[id]==k-a[i]){printf("%d %d\n",a[i],k-a[i]);flag=1;
		}
	}if(!flag)printf("No Solution");
}

/*#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int a,int b);
int main()
{
	int n=0,m=0,i,j,c=0;
	int a[100010];
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	sort(a,a+m,cmp);
	for(i=m;i>0;i--)
	{
		for(j=0;j<m;j++)
		{
			if(i==j) break;
			if((a[i]+a[j])==n)
			{
				printf("%d %d\n",a[i],a[j]);
				c++;
			}
		}
	
	}
	if(c==0){
		printf("No Solution");
	}
}
bool cmp(int a,int b)
{
	return a>b;
}*/

