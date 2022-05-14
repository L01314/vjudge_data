#include<stdio.h>
int main()
{
	int i,j,k,n,m;
	int a[250][250]={0};
	while(~scanf("%d",&n))
	{
		for(i=0;i<n;i++)
		{
			a[i][0]=1;
		}
		a[1][1]=1;
		for(m=2;m<n;m++)
			for(j=1;j<=m;j++) 
		{
			a[m][j]=a[m-1][j-1]+a[m-1][j];
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i-1;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("%d\n",a[i][i]);
		}
		printf("\n");
		
	}
}
