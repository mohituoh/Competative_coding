#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;


};
struct node* head=NULL;
struct node* root;
struct node* arr[104];
int front=0;
int rear=-1;
enqueue(struct node* nd)
{
	arr[++rear]=nd;
	

}
de_queue()
{
	front++;
}
struct node* create_node(int data)
{
	struct node* t= malloc(sizeof(struct node));
	t->data=data;
	t->left=NULL;
	t->right=NULL;
	return t;
}

create_Binary_Tree(struct node* nd)
{
	if(head==NULL)
	{
		head=nd;
		root=head;
		enqueue(nd);
	}
	else
	{
		if(arr[front]->left==NULL)
		{
			arr[front]->left=nd;
			enqueue(nd);
			
		}
		else
		{
			arr[front]->right=nd;
			enqueue(nd);
			de_queue();
	
		}

	}


}
int sum=0;
int sub_tree_sum(struct node* tr)
{
	if(tr==NULL)
	{
		return 0;	
	}
	if(tr->left==NULL && tr->right==NULL)
	{
		return tr->data;
	}
	int ls = sub_tree_sum(tr->left);
	int lr = sub_tree_sum(tr->right);
	
	return ls+lr+tr->data;



}


void main()
{
	int n;
	int data;
	printf("Enter the no. of nodes");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&data);
		struct node* q=create_node(data);
		create_Binary_Tree(q);
	}
	
	int p=sub_tree_sum(head);
	printf(" sum is  %d",p);
}