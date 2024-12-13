#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head=NULL;

struct Node* createNode(int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}
void insertAtBeginning(int data){
	struct Node* newNode=createNode(data);
	newNode->next=head;
	head=newNode;
}
void insertAtEnd(int data){
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

}
void insertAtPosition(int data,int position){
	if(position<1)
        {
                printf("Enter position greater than 1\n");
                return;
        }

        if(position==1)
        {
                insertAtBeginning(data);
                return;
        }
        struct Node *newNode=createNode(data);
        struct Node *temp=head;
        for(int i=1;i<position-1 && temp!=NULL;i++)
        {
        temp=temp->next;
        }
        if(temp==NULL)
        {
                printf("Position out of bounds\n");
                free(newNode);

        }
        else
        {
        newNode->next=temp->next;
        temp->next=newNode;
        }

}
void deleteAtBeginning(){
	if(head==NULL){
	printf("list is empty\n");
	return;
	}
	struct Node* temp=head;	
	head=head->next;
	free(temp);
}

void deleteAtEnd(){
	if(head==NULL){
		printf("list is empty\n");
		return;
		}
	struct Node* temp=head;
	if(temp->next==NULL){
		free(temp);
		head=NULL;
		return;
	}
	struct Node* prev=NULL;
	while(temp->next!=NULL){
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	free(temp);
}

void deleteAtPosition(int position){
	if(head==NULL){
		printf("list is empty\n");
		return;
		}
	if(position<1){
		printf("position should be greater than or equal to 1 \n");
		return;
	}
	if(position==1){
	deleteAtBeginning();
	return;
 	}
	struct Node* temp=head;
	struct Node* prev=NULL;
	for(int i=1;i<position&&temp!=NULL;i++)
		{
			prev=temp;
			temp=temp->next;
	}
	if(temp==NULL){
		printf("position greater than 1 \n");
		}
	else{
		prev->next=temp->next;
		free(temp);
	}
}


void search(int value)
{
struct Node *temp=head;
int found,position=1;
        if(temp==NULL)
        {
        printf("List is Empty\n");
        return;
        }
        while(temp!=NULL)
        {
        if(temp->data==value)
        {
        found=1;
        break;
        }
        temp=temp->next;
        position++;
        }
        if(found==1)
        {
        printf("Data found at %d\n",position);
        }
        else
        {
        printf("Value not found in list\n");
        }
}


void display(){
	struct Node* temp=head;
	if(temp==NULL){
		printf("list is empty\t");
		return;
     	}
	while(temp!=NULL){
	printf("%d\t",temp->data);
	temp=temp->next;
	}
}

int main(){
int data, choice,value,position;
		do{

			printf("\nSelect your choice:\n");
			printf("1.Element to be insert at beginning \n");
			printf("2.Element to be insert at end \n");
			printf("3.Element to be insert at the position \n");
			printf("4.Element to be delete at beginning \n ");
			printf("5.Element to be delete at end \n");
			printf("6.Element to be delete at the position \n");
			printf("7.display\n");
			printf("8.search\n");
			printf("9.exit\n");
			printf("enter your choice:");
			scanf("%d",&choice);
			switch(choice){
				case 1:
					printf("enter the data to be insert at beginning:");
					scanf("%d",&data);
					insertAtBeginning(data);
					break;
				case 2:
					printf("enter the value to be insert at end:");
					scanf("%d",&data);
					insertAtEnd(data);
					break;
				case 3:
					printf("enter the data:");
 					scanf("%d",&data);
					printf("enter the position:");
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
					printf("enter the position to delete element:");
					scanf("%d",&position);
					deleteAtPosition(position);
					break;
				case 7:
					display();
					break;
				case 8:
					printf("enter value to be searched:");
					scanf("%d",&value);
					search(value);
					break;
				case 9:
					printf("empty");
					exit(0);
					break;

				default:
					printf("invalid..");
					break;
		
			}}while(choice!=9);

						return 0;
						}
					


