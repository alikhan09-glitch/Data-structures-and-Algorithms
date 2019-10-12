#include<stdio.h>
#include<stdlib.h>
#define MAX 50 // you can alter th size of array by changing this

int st[MAX],top = -1;  // initialising an array of size max and top = -1 i.e stack is empty
void push(int st[],int value); // funtion declartion
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main()
{
int option,value; 
do
{
	printf("\n----- MAIN MENU ----- ");
	printf("\n 1 : push an element in stack");
	printf("\n 2 : pop an element in stack");
	printf("\n 3 : peek an element in stack");
	printf("\n 4 : Display stack");
	printf("\n Enter your choice");
	scanf("%d",&option);
	switch(option)
	{
		case 1 : 
			printf("\n Enter the element to be pushed into stack: ");
			scanf("%d",&value);
			push(st,value); //calling funtion push and passing array and the value to be pushed
			break;
		case 2 :
			value = pop(st);	 //callling funtion pop and storing the return value in variable value
			if(value != -1) 	// if value is not equal to -1 then we print the deleted value
			printf("\n The value delted from stack is %d",value); 
			break;
		case 3 :
			value = peek(st);	//callling funtion peek and storing the return value in variable value
			printf("\n The value stored at top of stack is %d",value); //printing the value at top of stack
			break;
		case 4 :
			display(st); // calling display fucntion
			break;
	}
}
	while(option != 5);
return 0;
}

void push(int st[],int value) // defination of push funtion
{
	if(top == MAX-1)  // checking if top euals to MAX-1 then it is an overflow condition 
	{			// we write a message the "stack is empty "
	printf("\n Stack is FULL");
	} 
	else 
	{
	top = top + 1;  // if our stack is not empty then we increment our top by one 
	st[top] = value; // and storing the value at the top of our stack
	} 
		
}
int pop(int st[])  // defination of pop function
{
	int value ; // declaring a varible value in which we will going to store our VALUE at top of stack
	if(top == -1) // checking if stack is empty or not
	{
		printf("\n stack is EMPTY"); // if stack is empty we print the message of  UNDERFLOW i.e stack is empty
		return -1;
	}
	else 
	{
		value = st[top]; // if stack is not empty then we store the value at top in our variable value
		top --;		 // and decrementing the top by 1
		return value; 	// and returning this value
	}

}
 void display(int st[])  // defination of Display funtion
{
	int i ; 
	if(top == -1)
	{
		printf("\n stack is EMPTY");
	}
	else
	{
		for(i=top;i>=0;i--)  // this loop will print values as Last in First Out
		printf("\n%d",st[i]); // i.e the value which is inserted last will be displayed first
	}

}
 int peek(int st[])  // defination of peek funtion
{
	if(top == -1 )				// checking  if stack is epty or not
	{
		printf("\n stack is EMPTY"); // if stack is empty then we write a message 
		return -1;
	}
	else                  // and if stack if not empty then
	{
		return(st[top]); // we return the element at top of our stack
	}
}






















