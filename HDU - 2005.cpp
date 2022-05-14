
#include<stdio.h>
int main()
{
	int y,m,d,sum,i;
	int mo[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	while(~scanf("%d/%d/%d",&y,&m,&d))
	{
		sum=d;
		if((y%4==0&&y%100!=0)||y%400==0)
		{
			mo[2]=29;
	
		}
		else mo[2]=28;
		for(i=1;i<m;i++)sum+=mo[i];
		printf("%d\n",sum);
	}
}





//#include<stdio.h>
//int main() {
//	int y, m, d, sum = 0, i,as;
//	int a[13] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//	while (~scanf("%d/%d/%d", &y, &m, &d))
//
//	{
//		sum+= d;
//		
//		for (i = 0; i < m; i++) {
//			sum += a[i];
//		}
//		
//		if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
//			as=sum+1;	
//		else 
//			as=sum;
//	
//
//		printf("%d\n", as);
//	}
//
//}
