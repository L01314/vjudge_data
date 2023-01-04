#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		int k=1;char s[10005];
		scanf("%s",s);
		for(int j=1;j<=strlen(s);j++){
			if(s[j-1]==s[j]) k++;
			else 
			{
				if(k==1) printf("%c",s[j-1]);
				else {printf("%d%c",k,s[j-1]); k=1;}
			}
		}
		printf("\n");
	}
}
