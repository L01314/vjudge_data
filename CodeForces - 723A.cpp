#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,x=3;
	int a[x];
	for(i=0;i<x;i++)
	{
		cin>>a[i];
	}
	sort(a,a+x);
	cout<<(a[1]-a[0])+(a[2]-a[1]) ;
	return 0;
}
