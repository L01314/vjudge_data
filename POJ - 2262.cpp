#include<cstdio>
const int N=1e6+5;
int p[N];
int cnt=0;
bool flag[N];
void solve(int n)                                  
{
	for(int i=3;i<=n;i++){
		if(!flag[i]&&!flag[n-i])
		{
			printf("%d = %d + %d\n",n,i,n-i);
			return ;
		}
	}
	return ;
}
void find()
{
	for(int i=2;i<=N;i++){
		if(!flag[i])	p[cnt++]=i;
	    
		for(int j=0;j<cnt;j++){
			if(i*p[j]>N) break;
			flag[p[j]*i]=true;
			if(i%p[j]==0) break;
		}
	}
	return ;
}
int main()
{
	int n;
	scanf("%d",&n);
	find();
    while(n!=0){
		solve(n);
		scanf("%d",&n);
	}	
	return 0;
}



