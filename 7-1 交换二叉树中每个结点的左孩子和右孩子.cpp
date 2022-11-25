#include<iostream>
using namespace std;
typedef struct Node{
	char data;
	struct Node *left,*right;
}Node ,*Tree,temp;
Tree create(){
	char ch;
	Tree tree=NULL;
	if(cin>>ch)
	{
		if(ch!='#')
		{
			tree=(Tree)malloc(sizeof(Node));
			tree->data=ch;
			tree->left=create();
			tree->right=create();
		}
		else
			tree=NULL;
	}
	return NULL;
}
void order(Tree tree){
	if(!tree)return ;
	order(tree->left);
	printf("%c",tree->data);
	order(tree->right);
}
void swap(Tree tree){

if(!tree) return ;
if(!tree->right&&!tree->left) return ;
Tree temp=tree->left;
tree->left=tree->right;
tree->right=temp;
swap(tree->left);
swap(tree->right);
}
int main()
{
	Tree tree=create();
	order(tree);
	cout<<endl;
	swap(tree);
	order(tree);
}
