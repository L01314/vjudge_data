#include<stdio.h>
int main()
{
	int a[13];
	int i,j,n,sum=0;
	int min=999,max=0;
	for(i=0;i<12;i++)
	{
			scanf("%d",&a[i]);
			sum+=a[i];
	}
	for(i=0;i<12;i++)
	{
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
		
	}
	printf("%d\n%d\n%d\n%d\n",sum,sum/12,max,min);
}









//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[1000];
//	scanf("%s",a);
//	for(int i=0;i<strlen(a);i++)
//		printf("%c\n",a[i]);
//}
//
//














//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i,k,sum,sum1,n;
//	scanf("%d%d",&sum,&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&k);
//		sum1+=k;	
//	}
//	printf("%d %d",sum1,(sum-sum1));
//}
//











//#include<stdio.h>
//int main()
//{
//	int i,sum;
//	for(i=1;i<=100;i++)
//	{
//		sum+=i;
//	}
//	printf("%d",sum);
//}
//







//#include <stdio.h>
//void sort()
//{}
//int sum(int m)
//{ 
//	if(m%3==0||m%5==0) 
//		return(1);
//	else
//		return(0);
//}
//int main()
//{  
//	int i,s=0;
//	for(i=100;i<=200;i++)
//		if(sum(i)==1) 
//			s=s+1;
//	printf("%d\n",s);
//	sort();
//}
