
#include<stdio.h>
#include<stdlib.h>
#define MAX_N 20   
#define MAX_SIZE MAX_N
typedef struct{
	char n,a,b,c;
}INFO;
INFO S[MAX_SIZE];   //ջ
int top=-1; //ջ��ָ��
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
			push(TOP.n-1, TOP.b ,TOP.a ,TOP.c);  //������ 1~n-1���̣���b���Ƶ�c����n������
			push(1      , TOP.a ,TOP.b ,TOP.c);  //�ڶ��� ֱ�ӽ�n���̣���a���Ƶ�c����
			push(TOP.n-1, TOP.a ,TOP.c ,TOP.b);  //��һ�� 1~n-1���̣���a���Ƶ�b����
		}
	}
	return 0;
}
