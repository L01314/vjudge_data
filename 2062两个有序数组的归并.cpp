#include<stdio.h>
int main()
{
	int n,m;
	int a[10000],b[10000],c[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&m);
	for(int i=0;i<m;i++) scanf("%d",&b[i]);
	int i=0,j=0,k=0;
	
	while(i<n&&j<m)
	{
		if(a[i]<b[j]) c[k++]=a[i++];
		else c[k++]=b[j++];
	}
	while(i<n) c[k++]=a[i++];
	while(j<m) c[k++]=b[j++];
	for(i=0;i<n+m;i++) printf("%d\n",c[i]);
	
}
