#include<bits/stdc++.h>
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
