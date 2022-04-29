#include<stdio.h>
#include<string.h>
int main()
{ 
	int n;
	scanf("%d",&n);
	while(n%10!=7)
	{
		 n/=10;
		 if(n==0)
		 {	printf("No");return 0;}
		
	}
	printf("Yes");
}
