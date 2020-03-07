#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;

};
int subTree_height(struct node* nd)
{
	if(nd==NULL)
	{
		return 0;	
	}
	int lt=1+subTree_height(nd->left);
	int rt=1+subTree_height(nd->right);
	if(lt>rt)
	{
		return lt;
	}
	else
	{
		return rt;
	}


}
struct node* head;
struct node* create_node(int data)
{
	struct node* t=	malloc(sizeof(struct node));
	t->data=data;
	t->left=NULL;
	t->right=NULL;
	return t;
}






void main()
{
	head=create_node(5);
	head->left=create_node(6);
	head->right=create_node(9);
	head->left->left=create_node(4);
	head->left->right=create_node(7);
	head->left->right->left=create_node(50);
	head->left->right->right=create_node(15);
	head->left->right->left->left=create_node(16);
	printf("\n%d",head->data);
	printf("\n%d",head->left->data);
	printf("\n%d",head->left->right->data);
	int p=subTree_height(head->left);
	int q=subTree_height(head->right);
	int s=p+q;
	printf("\nnodes in longest path is %d",s+1);
	printf("\n height of tree is %d",p-1);
}