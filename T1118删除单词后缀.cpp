#include<stdio.h>
#include<string.h>
int main() {
	char a[50];
	int i;
	scanf("%s", a);
	i = strlen(a) - 1;
	if ((a[i--] == 'r' && a[i] == 'e') || (a[++i] == 'y' && a[--i] == 'l') || (a[i] == 'g' && a[--i] == 'n' && a[--i] == 'i'))

	{
		a[i] = '\0';
	}
	printf( "%s", a);
}




//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[33];
//	int i,j,k;
//	scanf("%s",a);
//	k=strlen(a);
//
//	printf("%d",k);
//	if(a[k-2]=='e'&&a[k-1]=='r')
//	{
//		for(i=0;i<k-2;i++)
//		{
//			printf("%c",a[i]);
//		}
//		return 0;
//	}
//	else if(a[k-2]=='l'&&a[k-1]=='y')
//	{
//		for(i=0;i<k-2;i++)
//		{
//			printf("%c",a[i]);
//		}
//		return 0;
//	}
//	else if(a[k-2]=='n'&&a[k-1]=='g')
//	{
//		for(i=0;i<k-3;i++)
//		{
//			printf("%c",a[i]);
//		}
//		return 0;
//	}
//	else
//		for(i=0;i<k;i++)
//	{
//		printf("%c",a[i]);
//	}
//	return 0;
//}
