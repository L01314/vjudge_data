#include<stdio.h>
int main()
{
	int n,z=0,x=0,c=0,v=0,max=0;
	int a;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
    	 scanf("%d",&a);
		if(a==1) z++;
		else if(a==2) x++;
		else if(a==3) c++;
	}
	if(z>x) max=z;
	else max=x;
	
	if(max>c) v=n-max;
	else v=n-c;
	
	printf("%d",v);
}
