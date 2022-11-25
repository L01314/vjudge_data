#include<iostream>
using namespace std;
typedef long long ll;

ll arr[50000005];
int main()
{
	ll n,p;
	cin>>n>>p;
	arr[1]=1;
	cout<<arr[1]<<endl;
	for(int i=2;i<=n;i++){
		arr[i]=(p-p/i)*arr[p%i]%p;
		cout<<arr[i]<<endl;
	}
}

/*
ll ne(ll x,ll y)
{
	if(x==1)return 1;
	return (y-y/x)*ne(y%x,y)%y;
}

int main()
{ 
	ll m,n;
	cin>>m>>n;
 	for(ll i=1;i<=m;i++){
		cout<<ne(i,n)<<endl;
	}
	
}
*/


