#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;


};
struct node* head=NULL;
//struct node* root;
struct node* arr[104]={NULL};
int front=-1;
int rear=0;
struct node* create_node(int data)
{
	struct node* t=malloc(sizeof(struct node));
	t->data=data;
	t->left=NULL;
	t->right=NULL;
	return t;
}

struct node* queue[104]={'\0'};
int sum=0;
enqueue(struct node* r)
{
	queue[rear++]=r;


}
dequeue()
{
	front++;
}

int i=0;
int j=0;
int dis=0;
diagonal_sum(struct node* root)
{
	printf("hii");

	while(root!=NULL)
	{
		if(root->left!=NULL)
		{
			enqueue(root->left);

		}
			//root=root->right;
		if(arr[dis]==NULL)
		{
			printf("mohit");
			//arr[dis]=root;

		}

		//printf("\n%d",queue[0]->data);
		/*else
		{
			struct node* t=arr[dis];
			printf("%d",t->data);
			/*while(t->right!=NULL)
			{
				t=t->right;
			}
				t->right=root;*/
		}
			//root=root->right;
			
	//}
	/*	dequeue();
		if(queue[front]!=NULL)
		{
			dis=dis+1;
			diagonal_sum(queue[front]);
		}
		*/	
	


}
void main()
{
	head=create_node(1);
	head->left=create_node(2);
	head->right=create_node(3);
	head->left->left=create_node(9);
	head->left->right=create_node(6);
	head->left->left->right=create_node(10);
	head->left->right->left=create_node(11);
	head->right->left=create_node(4);
	head->right->right=create_node(5);
	head->right->left->left=create_node(12);
	head->right->left->right=create_node(7);
	printf("hello");
	diagonal_sum(head);
}