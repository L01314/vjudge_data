#include<stdio.h>
int main()
{	int a[105];
	int n,i,sum=0,num=0,max=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	      scanf("%d",&a[i]);
		  if(a[i])sum++;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1)num--;
		else if(a[i]==0)num++;
		if(num<0)num=0;
		if(num>max)max=num;
	}
	//printf("/////////////%d\n",max);
	if(max>0)printf("%d\n",sum+max);
	else printf("%d\n",sum-1);
	return 0;
	
}
