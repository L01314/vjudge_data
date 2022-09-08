#include<ios>
int i,j,a,b,n,x;
bool f[100008];
int main()
{
	for(scanf("%d%d",&n,&x),f[0]=i=1;i<=n;i++)
		for(j=10006,scanf("%d%d",&a,&b);j>=0;j--)
			f[j]=0|f[j-a<0?10006:j-a]|f[j-b<0?10006:j-b];
	puts(f[x]?"Yes":"No");
}
