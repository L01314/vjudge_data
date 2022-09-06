#include<stdio.h>
#include<math.h>
int main()
{
	int x[9]={0,2,1,-1,-2,-2,-1,1,2};
	int y[9]={0,1,2,2,1,-1,-2,-2,-1};
	int x1,x2,y1,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	x1-=x2,y1-=y2;
	x2=0;y2=0;
	int k=0;
	for(int i=1;i<=8;i++)
	{
	    if(abs(x1-x[i])==1&&abs(y1-y[i])==2||abs(x1-x[i])==2&&abs(y1-y[i])==1)	
              if(abs(x2-x[i])==1&&abs(y2-y[i])==2||abs(x2-x[i])==2&&abs(y2-y[i])==1)	
				  
	   k=1;
	}
	if(k==1) printf("Yes");
	else printf("No");
	return 0;
}
