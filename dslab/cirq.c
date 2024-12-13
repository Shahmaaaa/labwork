#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,*queue,item,i,size;
int enqueue()
{
	 if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		printf("enter the element to be insert :");
		scanf("%d",&item);
		queue[front]=item;
	}
 	else if(((rear+1)%size)==front)
	{
		printf("\nqueue is full");
	}
	else{
		printf("enter the element to be insert :");
		scanf("%d",&item);
		rear=(rear+1)%size;
		queue[rear]=item;
		}
}
int dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("\nqueue underflow");
	}else if(front==rear)
		{
			printf("deleted element is %d",queue[front]);
			front=rear=-1;
		}
	else{
		printf("deleted element is %d",queue[front]);
		front=(front+1)%size;
		}
}

int display()
{
	if(front==-1 && rear==-1)
	{
		printf("\nNothing to display");
	}
	else{
		printf("\nelements are :");
		for(i=front;i!=rear;i=(i+1)%size)
		{
			printf("%d\t",queue[i]);
		}
		printf("%d\t",queue[i]);
		}
}
int search()
{
	if(front==-1 && rear==-1)
	{
		printf("\nqueue is empty");
	}else{
		int searchitem,found=0;
		printf("enter element to be search :");
		scanf("%d",&searchitem);
		for(i=front;i!=rear;i=(i+1)%size)
			{
			if(queue[i]==searchitem)
				{
				found=1;
				break;
				}
			}
		if(queue[i]==searchitem)
		{
			found=1;
		}
		if(found)
		{
			printf("element %d is found in the queue\n",searchitem);
		}else{
			printf("element %d is not found in the queue\n",searchitem);
			}
		}
}
int main()
{
	int option;
	printf("enter the size of circular queue :");
	scanf("%d",&size);
	queue=(int*)malloc(sizeof(size* sizeof(int)));
	if(queue==NULL){
		printf("memory allocation failed.exiting program");
		exit(1);}
	printf("\n\ncircular queue \n");
	while(1){
		printf("\n1.enqueue\n2.dequeue\n3.display\n4.search\n5.exit\n");
		printf("\nselect operation : ");
		scanf("%d",&option);
		switch(option){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				search();
				break;
			case 5:
				free(queue);
				exit(0);
			default:
				printf("invalid option");
				break;
		}
		}
}
