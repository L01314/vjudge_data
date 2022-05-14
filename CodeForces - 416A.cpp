#include<bits/stdc++.h>
#define N 1e9;
#define int long long
using namespace std;
int mx=2*N;
int mi=-2*N;
signed main()
{
	ios::sync_with_stdio(false);
	int n;cin>>n;
	while(n--)
	{
		string s;
		int x;char op;
		
		cin>>s>>x>>op;
		if((s==">="&&op=='Y')||(s=="<"&&op=='N'))
		{
			if(mi<x)
				mi=x;
		}
		if((s==">"&&op=='Y')||(s=="<="&&op=='N'))
		{
			if(mi<x)
				mi=x+1;
		}
		if((s=="<="&&op=='Y')||(s==">"&&op=='N'))
		{
			if(mx>x)
				mx=x;
		}
		if((s=="<"&&op=='Y')||(s==">="&&op=='N'))
		{
			if(mx>=x)
				mx=x-1;
		}
		
	}
	if(mx<mi)  cout<<"Impossible"<<endl;
	else cout<<mi<<endl;
	
	return 0;
}
