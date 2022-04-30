#include<stdio.h>
int i,j,k,n;
struct node
{
	int a;int b;int c;int num;int id;
}s[100],temp;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)   
	{
		scanf("%d %d %d",&s[i].a,&s[i].b,&s[i].c);
		s[i].id=i;
	    s[i].num=s[i].a+s[i].b+s[i].c;
	}
	for(i=1;i<n;i++)
		
	{
		for(j=1;j<n-i+1;j++)
		{
			if(s[j].num<s[j+1].num)
			{
				temp=s[j];s[j]=s[j+1];s[j+1]=temp;
			}
			if(s[j].num==s[j+1].num)
			{
				if(s[j].a<s[j+1].a)
				{
					temp=s[j];s[j]=s[j+1];s[j+1]=temp;
					if(s[j].a==s[j+1].a)
					{
						if(s[j].id>s[j+1].id)
						
						{
							temp=s[j];s[j]=s[j+1];s[j+1]=temp;
						}	
						
					}
				}
			}
		}
	}
	for(i=1;i<=5;i++)
	{
			printf("%d %d\n",s[i].id,s[i].num);
	}
}
