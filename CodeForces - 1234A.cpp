#include<stdio.h>
int main()
{
	int n,num,s,t,k,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		 	scanf("%d",&num);
			s=0;
			for(j=0;j<num;j++){
					scanf("%d",&t);
					s+=t;
			}
			k=s/num;
			if(s%num!=0){
					printf("%d\n",k+1);
			}
			else
					printf("%d\n",k);
	}
	return 0;
}


















//#include<stdio.h>
//int main()
//{
//	int n,m,k;
//	int a,sum;
//	scanf("%d",&n);
//	
//	for(int j=0;j<n;j++){
//		sum=0;
//		
//		scanf("%d",&m);
//		sum=0;
//		
//		for(int i=0;i<m;i++){
//			scanf("%d",&a);
//			sum+=a;
//		}
//		k=sum/m;
//		if(sum%m==0)
//			printf("%d\n",k+1);
//		
//		else
//			printf("%d\n",k);
//		
//	}
//	return 0;
//}
