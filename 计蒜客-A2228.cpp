#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int main()
{
	int n;
	cin>>n;
	n=sqrt(n);
	__int128 ans=(__int128)n*(n+1)*(n*2+1)/6%mod;
	cout<<(int )ans;
	return 0;
	
}
