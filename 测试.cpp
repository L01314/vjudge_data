#include <stdio.h>
int fact(int a,int b)
{
	int i,j,sum=0,flag=0,p=0;
	for(i=a;i<=b;i++)
	{
		sum=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
				sum+=j;
		}
		if(sum==i&&sum!=1)
		{
			if(p==0)
				printf("%d",i);  //这里是对格式有所要求
			else
				printf(" %d",i);
			p++;
			flag=1;
		}
	}
	if(flag==0)
		printf("None\n");
}
int main(void)
{
	int x,y;
	scanf("%d %d",&x,&y);
	fact(x,y);
	return 0;
}

