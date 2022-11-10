#include<stdio.h>
int main()
{
	int x,y,n;
	scanf("%d",&n);
	for(x=2;x<n;x=x+2)
	{
		if(x%2==0&&(n-x)%2==0)
		{
			printf("Yes");
			return 0;
			
		}
	
	}
	printf("NO");
	return 0;
}
