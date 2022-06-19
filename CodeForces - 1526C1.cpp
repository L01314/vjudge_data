#include<iostream>
#include<queue>
using namespace std;
priority_queue<long long int>q;

long long int  n,x,sum,ct;
int main()
{
	scanf("%lld",&n);
	ct=n;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x);
		sum+=x;
		if(x<0) q.push(-x);
		if(sum<0)
		{
			sum+=q.top();
			q.pop();
			ct--;
			
		}
	}
	cout<<ct<<endl;
}

















//#include<stdio.h>
//int n,i,a[2005]={0},j=0,sum;
//int main()
//{
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	sum=a[0];
//	for(i=1;i<n;i++)
//	{
//		if((sum-a[i])<=0)
//		{
//			sum+=a[i];
//			printf("#########%d   %d +%d\n",i,j,sum);
//		}
//		else 
//		{
//			sum=sum+a[i];
//			printf("@@@@@@@@@@%d  %d  +++%d\n",i,j,sum);
//			j++;
//			
//		}
//	}
//	printf("%d",j);
//	
//}
