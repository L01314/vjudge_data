#include<stdio.h>
int main()
{
	int a,b;
	int c;
	scanf("%d",&c);
	
	for(int i=0;i<c;i++){
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
	return 0;
}
