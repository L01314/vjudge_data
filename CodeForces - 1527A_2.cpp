#include<stdio.h>
#include<math.h>
int prime_2(int n){
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	else
		return n;
}

void solve(int a)
{
	for(int i=a-1;i>a/2;i--){
		 if((prime_2(i)+prime_2(a-i))==a)
		 {
			 printf("%d = %d + %d\n",a,a-i,i);
		 }
	}
}

int main()
{
	int m;
	scanf("%d",&m);
	
	while(m){
	solve(m);
	}
	return 0;
}
