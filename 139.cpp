#include<stdio.h>
int main()
{
	int m,k,end=0;
	scanf("%d %d",&m,&k);
	while(m!=0&&k!=0)
	{
		if(m<k) end=m;
		else 
		{
			while(m>=k) 
			{
				m=m-k+1;
				end+=k;
			}
			if(m!=0) end+=m;
		}
		printf("%d\n",end);
		end=0;
	    scanf("%d %d",&m,&k);
	}
		
		
}
