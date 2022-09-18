//Queue Implementation
# include <stdio.h>
# include <stdlib.h>
# define size 5

int queue [size]; // queue initialization
int front = -1;   //initialization condition
int rear = -1;
//Function Prototyping
void enqueue (int);
void dequeue ();
void isEmpty ();
void traverse ();

int main ()
{
    int choice, n;

    /* while loop */
    while(1)
    {
        printf("\n----Queue_Menu-----");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.isEmpty");
        printf("\n4.Traverse");
        printf("\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        /* switch case starts here */
        switch(choice)
        {
            case 1: printf("Enter a integer : ");
            	    scanf("%d", &n);
                    enqueue(n);
                    break;
            case 2: dequeue();
                    break;
            case 3: isEmpty();
                    break;
            case 4: traverse();
                    break;
            case 5: exit(0);
                    break;
            default: printf("\nInvalid Choice!");
        }   // Switch ENDS 
    }       // While ENDS
}           // Main ENDS- 

void enqueue (int n)
{
    	// Adding First Element of Queue //
    if(front == -1 && rear == -1)
    {
        front++;
        queue[++rear] = n;
    } else {
    	// Other Element //
        if(rear == size - 1)
        {
            printf("\nQueue overflow!");
        } else {
            queue[++rear] = n;
        }
    }
}
/* enqueue() ends here */

/* dequeue() -> removes an element from front */
void dequeue()
{
	// Empty Queue Condition //
	if(front == -1 && rear == -1)
    {
    	printf("\nQueue is Empty!");
	} 
	// One Element Condition //
    else if(rear == front)
    {
        front = -1;
        rear = -1;
    } 
    // Other Element //
	else {
        front++;
    }
    
} 
/* dequeue() ends here */

/* isEmpty() -> checks if the queue is empty or not */
void isEmpty()
{
    if(front== -1 && rear == -1)
    {
        printf("\nQueue is Empty!");
    } else {
        printf("\nQueue is Not Empty!");
    }
}
/* isEmpty() ends here */

/* show() -> displays queue */
void traverse()
{
    int i;
    /* empty condition */
    if(front == -1 && rear == -1)
    {
        printf("\nQueue is Empty!");
    } else {
        for(i = front; i <= rear; i++)
        {
        	/* display front and rear pointers */
        	if(rear == front)
        	{
        		printf("\n%d <- front & rear", queue[i]);
			}
        	else if(i == front)
        	{
        		printf("\n%d <- front",queue[i]);
			}
			else if(i == rear)
			{
				printf("\n%d <- rear ",queue[i]);
			} 
			else
			{
            	printf("\n%d", queue[i]);
        	}
        }
    }
}
/* show() ends here */
