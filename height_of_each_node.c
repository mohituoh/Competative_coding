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
struct node* root1;
struct node* arr[104];
int front=0;
int rear=-1;
int d;
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
		root1=head;
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
/*inorder_traversal(struct node* root)
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
*/

int height(struct node* h)
{

	if(h == NULL)
	{

		return 0;
	}

	int lh=1+height(h->left);


	int rh=1+height(h->right);
	

	if(lh>rh)
	{
		return lh;
	}
	else
	{	
		
			return rh;
	}

}
height_of_each_node(struct node* k)
{

	//printf("\nthis is height of k %d\n",height(k));
	//printf("\nthe data  of k %d\n",k->data);
	if(k==NULL)
	{
		return;
	}


	height_of_each_node(k->left);
	printf("\nheight of %d is %d\n",k->data,height(k));
	height_of_each_node(k->right);



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
	


	 d=height(root1);
	printf("height of the tree is - %d",d);
	height_of_each_node(root1);
}
