#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int pile[30]={0};
	for(int i=0;i<s.size();i++)
	{
		s[i]=tolower(s[i]);
		int num=s[i]-'a';
		pile[num]++;
		
	}
	sort(pile,pile+26);
	int sum=0;
	for(int i=25;pile[i]!=0;i--)
	{
		sum+=(i+1)*pile[i];
	}
	cout<<sum;
}
