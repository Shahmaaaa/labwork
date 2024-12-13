#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node *top=NULL;
int isempty()
{
	if(top==NULL)
	{
	return 1;
	}
	else{
	return 0;
	}
}
void push(int data)
{
	struct node*newnode;
	newnode=malloc(sizeof(newnode));
	if(newnode==NULL)
	{
		printf("stack is overflow");
		exit(1);
	}
	newnode->data=data;
	newnode->link=NULL;
	if(top!=NULL){
	    newnode->link=top;
	}
	top=newnode;
}
int pop()
{
	struct node *temp;
	int val;
	int ds = isempty();
	if(ds == 1)
	{
		printf("stack is underflow"); 
		return  -1;
	}
else
{
	temp=top;
	val=temp->data;
	top=temp->link;
	free(temp);
	return val;

}
}
int peek()
{	 
	if(isempty())
	{
		printf("stack underflow\n");
		exit(1);

	}
	return top->data;
}
void print()
{
	struct node*temp=top;
	temp=top;
	if(isempty())
	{
		printf("stack is underflow\n");
		exit(1);
	}
printf("the stack elements are\n");
	while(temp)
	{
	printf("%d\t",temp->data);
	temp=temp->link;
	}
	printf("\n");
}

void search(int value)
{
      struct node*temp=top;
        temp=top;
	int found,position=1;
        if(isempty())
        {
                printf("stack is underflow\n");
                return;
        }
        while(temp)
        {
        if(temp->data==value)
	{
	found=1;
	break;
	}
        temp=temp->link;
	position++;
        }
	if(found==1)
	{
		printf("Item found at %d",position);
	}
	else{
		printf("Item donot fuond");
	}


}

int main()
{
int choice,data,value;
while(1)
{
		printf("\n");
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.print the top element\n");
		printf("4.print all the elements of stack\n");
		printf("5.Search\n");
		printf("6.Exit\n");
		printf("please enter your choice");
		scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("enter the element to be pushed");
		scanf("%d",&data);
		push(data);
		break;
	case 2:
		data=pop();
		printf("%d element removed\n",data);
		break;
	case 3:
		printf("the topmost element of stack is %d\n",peek());
		break;
	case 4:
		print();
		break;
	case 5:
		printf("Enter data to be searched");
		scanf("%d",&value);
		search(value);
	case 6:
		exit(1);
	default:
		printf("wrong choice\n");
	}
}
return 0;
}
