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
struct node* result=NULL;
struct node* result2;
int count=0;
inorder_traversal(struct node* root)
{
	if(root==NULL)
	{
		return ;
	}
	inorder_traversal(root->left);

	
	
		if(result==NULL)
		{
			result=root;
			result2=result;
		}
		else
		{
			result2->right=root;
			result2=result2->right;
			
		}
		
	
		inorder_traversal(root->right);
	
}

result_data(struct node* result2)
{
	printf("this is leaf ");
	while(result2!=NULL)
	{

		printf("%d",result2->data);
		result2=result2->right;
	}

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
	

	inorder_traversal(head);
	result_data(result);
result->left=result2;
result2->right=result;

}