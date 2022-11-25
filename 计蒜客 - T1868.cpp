#include<iostream>
#define mod 6662333
typedef long long ll;
using namespace std;
ll n,m,x,y;
int main()
{
	cin>>n;
	ll ans=1,a=2;n--;
	while(n){
		if(n&1)
		ans=ans*a%mod;
	//	cout<<a<<endl;
		a=a*a%mod;
		n/=2;
	//	cout<<ans<<endl;
	//	cout<<n<<endl;
	}
	cout<<ans%mod;
}
