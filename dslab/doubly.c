#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node* prev;
	int data;
	struct Node* next;
};
struct Node* head=NULL;
struct Node* createNode(int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->prev=NULL;
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}
void insertAtBeginning(int data)
{
struct Node* newNode=createNode(data);
newNode->prev=NULL;
newNode->next=head;
head=newNode;
}
void insertAtEnd(int data)
{
struct Node* newNode=createNode(data);
if(head==NULL){
head=newNode;
return;
}
struct Node* temp=head;
while(temp->next!=NULL){
	temp=temp->next;
	}
	temp->next=newNode;
	newNode->prev=temp;
	newNode->next=NULL;
}
void insertAtPosition(int data,int position)
{
 	if(position<1)
	{
		printf("position must be greater than or equal to zero \n");
		return;
	}
	if(position==1)
	{
		insertAtBeginning(data);
		return;
	}
	struct Node* newNode=createNode(data);
	struct Node* temp=head;
	for(int i=1;i<position-1&&temp!=NULL;i++)
	{
	temp=temp->next;
	}
	if(temp==NULL)
	{
	printf("position out of bound \n");
	free(newNode);
	}
	else{
	newNode->next=temp->next;
	temp->next->prev=newNode;
	temp->next=newNode;
	newNode->prev=temp;
	}
}
void deleteAtBeginning()
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct Node* temp=head;
	head=temp->next;
	if(head!=NULL)
	{
	head->prev=NULL;
	}
	free(temp);
	printf("item deleted\n");
}
void deleteAtEnd()
{
	if(head==NULL){
	printf("list is empty");
	return;
	}
	struct Node* temp=head;
	struct Node* loc=NULL;
	if(temp->next==NULL){
		free(temp);
		head=NULL;
		return;
	}
		while(temp->next!=NULL){
			loc=temp;
			temp=temp->next;
		}
		loc->next=NULL;
		free(temp);
		printf("item deleted");
}
void deleteAtPosition(int position){
	if(position<1){
		printf("position must be greater than zero ");
		return;}
	if(position==1){
		deleteAtBeginning();
		return;
	}
	struct Node* temp=head;
	struct Node* loc=NULL;
		for(int i=1;i<position&&temp!=NULL;i++)
		{
		loc=temp;
		temp=temp->next;
	}
	if(temp==NULL){
	printf("position of bound\n");
	}
	else{
	loc->next=temp->next;
	loc->prev=temp->prev;
	free(temp);
	}
}
void display()
{
	struct Node* temp=head;
	if(temp==NULL){
		printf("list is empty");
		return;
	}
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
void search(int value)
{
	int position=1,found;
	struct Node* temp=head;
	if(head==NULL){
		printf("list is empty");
		return;
	}
	while(temp!=NULL){
		if(temp->data==value){
			found=1;
			break;
		}
		temp=temp->next;
		position++;
		}
		if(found==1){
			printf("%d is found at %d",value,position);
			}
		else{
		printf("%d is not found",value);
		}
}
int main(){
	int data,value,position,choice;
		do{
			printf("\n doubly linked operations\n");
			printf("select your choice\n");
			printf("1.insert at beginning \n");
			printf("2.insert at end\n");
			printf("3.insert at any position\n");
			printf("4.delete at end\n");
			printf("5.delete at beginning\n");
			printf("6.delete at any position\n");
			printf("7.display list\n");
			printf("8.search\n");
			printf("exit\n");
			printf("enter your choice :\n");
			scanf("%d",&choice);
				switch(choice){
					case 1:
						printf("enter data to be inserted\n");
						scanf("%d",&data);
						insertAtBeginning(data);
						break;
					case 2:
						printf("enter data to be inserted\n");
						scanf("%d",&data);
						insertAtEnd(data);
						break;
					case 3:
						printf("enter data to be inserted\n");
						scanf("%d",&data);
						printf("enter position to be inserted\n");
						scanf("%d",&position);
						insertAtPosition(data,position);
						break;
					case 4:
						deleteAtBeginning();
						break;
					case 5:
						deleteAtEnd();
						break;
					case 6:
						printf("enter position to be deleted \n");
						scanf("%d",&position);
						deleteAtPosition(position);
						break;
					case 7:
						display();
						break;
					case 8:
						printf("enter value to be searched\n");
						scanf("%d",&value);
						search(value);
						break;
					case 9:
						printf("empty");
						exit(0);
						break;
					default:
						printf("enter proper choice\n");
						break;
					}
					}while(choice!=9);
						return 0;
						}

	

 
