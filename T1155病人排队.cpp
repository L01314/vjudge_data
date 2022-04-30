#include<stdio.h>
int i,j,n; 
struct node
{
	char  num[100];
	int age;
}s[100],k;
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",s[i].num,&s[i].age);
	for(i=1;i<n;i++)
		for(j=0;j<n-i;j++)
	{
		if(s[j+1].age>s[j].age&&s[j+1].age>=60)
		{
			k=s[j+1];s[j+1]=s[j];s[j]=k;
		}
	}
		for(int i=0;i<n;i++)
			printf("%s\n",s[i].num);
}



/*#include<bits/stdc++.h>
using namespace std;
int i,j,k,n;
struct node
{
	string id;
	int year;
}s[100];

bool cmp(node a,node b)
{
	return a.year>b.year&&a.year>=60;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)	cin>>s[i].id>>s[i].year;
	sort(s,s+n,cmp);
	
	for(int i=0;i<n;i++)
		cout<<s[i].id<<endl;
	
	
}
*/
