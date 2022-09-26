#include<iostream>
using namespace std;
int main()
{
	string s,t;
	while(cin>>s>>t)
	{
		int count=0;
		for(int i=0; i<s.size(); ++i)
		{
			int j=0,k=i;
			while(s[k]==t[j] && k<s.size())
			{
				++k;
				++j;
			}
			if(j==t.size())
			{
				count++;
				i=k-1;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

