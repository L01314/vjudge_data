
#include<stdio.h>
#include<stdlib.h>
#define MAX_N 20   
#define MAX_SIZE MAX_N
typedef struct{
	char n,a,b,c;
}INFO;
INFO S[MAX_SIZE];   //栈
int top=-1; //栈顶指针
void push(char n,char a,char b,char c){
	++top;
#define PUSH_S(x) S[top].x=x
	PUSH_S(n);
	PUSH_S(a);
	PUSH_S(b);
	PUSH_S(c);
}
int main() {
	int N;
	scanf("%d",&N);
	if(N>MAX_N)return 1;  
	push(N,'a','b','c');  
	while(top>=0){
		INFO TOP=S[top]; --top;
		if(1==TOP.n){  
			printf("%c -> %c\n",TOP.a,TOP.c);
		}else{ 
			push(TOP.n-1, TOP.b ,TOP.a ,TOP.c);  //第三步 1~n-1号盘，从b柱移到c柱的n号盘上
			push(1      , TOP.a ,TOP.b ,TOP.c);  //第二步 直接将n号盘，从a柱移到c柱上
			push(TOP.n-1, TOP.a ,TOP.c ,TOP.b);  //第一步 1~n-1号盘，从a柱移到b柱上
		}
	}
	return 0;
}
