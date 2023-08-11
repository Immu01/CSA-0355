#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
int main()
{
	struct node*head,*node1,*node2,*node3,*node4,*node5,*node6,*node7,*node8,*node9,*node10;
	head=(struct node*)malloc(sizeof(struct node));
	node1=(struct node*)malloc(sizeof(struct node));
	node2=(struct node*)malloc(sizeof(struct node));
	node3=(struct node*)malloc(sizeof(struct node));
	node4=(struct node*)malloc(sizeof(struct node));
	node5=(struct node*)malloc(sizeof(struct node));
	node6=(struct node*)malloc(sizeof(struct node));
	node7=(struct node*)malloc(sizeof(struct node));
	node8=(struct node*)malloc(sizeof(struct node));
	node9=(struct node*)malloc(sizeof(struct node));
	node10=(struct node*)malloc(sizeof(struct node));

	node1->data=100;
	node1->next=NULL;
	head=node1;
	printf("node 1:%d\n",node1->data);
	
	node2->data=120;
	node2->next= NULL;
	node1->next=node2;
	printf("node 2:%d\n",node2->data);
	
	node3->data=130;
	node3->next=NULL;
	node2->next=node3;
	printf("node 3:%d\n",node3->data);
	
	node4->data=140;
	node4->next=NULL;
	node3->next=node4;
	printf("node 4:%d\n",node4->data);
	
	node5->data=150;
	node5->next=NULL;
	node4->next=node5;
	printf("node 5:%d\n",node5->data);
	
	node6->data=160;
	node6->next=NULL;
	node5->next=node6;
	printf("node 6:%d\n",node6->data);
	
	node7->data=170;
	node7->next=NULL;
	node6->next=node7;
	printf("node 7:%d\n",node7->data);
	
	node8->data=180;
	node8->next=NULL;
	node7->next=node8;
	printf("node 8:%d\n",node8->data);
	
	node9->data=190;
	node9->next=NULL;
	node8->next=node9;
	printf("node 9:%d\n",node9->data);
	
	node10->data=200;
	node10->next=NULL;
	node9->next=node10;
	printf("node 10:%d",node10->data);
}
