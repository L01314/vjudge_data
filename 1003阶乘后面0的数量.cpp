#include<stdio.h>
int main()
{
 int n;
 while(~scanf("%d",&n))
 {
	 int sum=0;
	 while(n){
		 sum+=n/5;
		 n=n/5; 
	 }
	 printf("%d\n",sum);
 }
}
