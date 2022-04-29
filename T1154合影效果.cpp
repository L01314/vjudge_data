#include<bits/stdc++.h>
using namespace std;
int i,j,k;

struct node
{
	string bg;
	double h;
}d[100];
//node d[100];


bool cmp(node a,node b)
{
	return a.h>b.h;
}
bool ccmp(node a,node b)
{
	return a.h<b.h;
}

void pro(string s,int n)
{
	for(int i=0;i<n;i++)
	{
		if(d[i].bg==s) printf("%.2f ",d[i].h);
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>d[i].bg>>d[i].h;
	  sort(d,d+n,ccmp);
	  pro("male",n);
	  sort(d,d+n,cmp);
	  pro("female",n);
}




















/*#include<bits/stdc++.h>
using namespace std;
int n,t1,t2;
double a[110],b[110],x;
char s[25];


int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>s[i]>>x;
		if(s[0]=='f')  b[++t2]=x;
		else a[++t1]=x;
		
	}
	sort(a+1,a+t1+1);
	sort(b+1,b+t2+1);
	for(int i=1;i<=t1;i++)  printf("%.2f",a[i]);
	for(int j=1;j<=t2;j++)  printf("%.2f",b[i]);
}*/

