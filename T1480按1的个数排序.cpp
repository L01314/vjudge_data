#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct strings
{
	int ones,number;
	char s[1002];
}s[1002];
char a[1002];
bool cmp(strings a,strings b)
{
	return (a.ones<b.ones)||(a.ones==b.ones&&a.number<b.number);
}
int main()
{
	int i,j,k,l,m,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>s[i].s;
	   s[i].number=i;
	   s[i].ones=0;
	   for(j=0;j<strlen(s[i].s);j++)
	   {
		   if(s[i].s[j]=='1') s[i].ones++;
	   }
	}
	sort(s+1,s+n+1,cmp);
	for(i=1;i<=n;i++)  cout<<s[i].s<<endl;
	return 0;
}
