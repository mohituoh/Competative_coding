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
//struct node* arr[104]={NULL};
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

tree()
{
	head=create_node(1);
	head->left=create_node(2);
	 head->right=create_node(3);
	head->left->left=create_node(7);
	head->left->right=create_node(6);
	//head->left->left->right=create_node(10);
	//head->left->right->left=create_node(1);
	//head->left->right->right=create_node(1);
	head->right->left=create_node(5);
	 head->right->right=create_node(4);
	// head->right->right->left=create_node(4);
	//head->right->left->left=create_node(20);
	//head->right->left->right=create_node(7);
	head->left->left->left=create_node(8);
	head->left->left->right=create_node(9);
	head->left->right->left=create_node(10);
	head->left->right->right=create_node(11);


}




struct node* bqueue[104];
int bfront=-1;
int brear=-1;

benqueue(struct node* root)
{

	bqueue[++bfront]= root;

}
struct node* bdequeue()
{
	return bqueue[++brear];

}




void main()
{
	tree();
	printf("  %d",head->data);
	benqueue(head->left);
	benqueue(head->right);
	int sum2=head->data;
	printf("\n");
	struct node* t=bdequeue();

	int sum1=0;
	int s1=0;
	int s2=0;
	while(t!=NULL)
	{
		benqueue(NULL);
		while(t!=NULL)
		{
			printf(" % d",t->data);
			
			if(s2==0)
			{
			sum1=sum1+t->data;
			}
			else
			{
			sum2=sum2+t->data;
			}
			benqueue(t->left);
			benqueue(t->right);
			t=bdequeue();
		}
		if(s2==0)
		{
			s2=1;
		}
		else
		{
			s2=0;
		}
		printf("\n");
		t=bdequeue();
	}	
	printf("\nsum1 is : %d\n",sum1);
	printf("\nsum2 is :%d \n",sum2);
	printf("\ndifference of odd and even level is : %d \n",sum1-sum2);

}


