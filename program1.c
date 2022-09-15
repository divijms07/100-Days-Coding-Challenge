//Stack Implementation Using Array
# include <stdio.h>
# include <stdlib.h>
# define SIZE 5

int stack [SIZE];
int top = -1 ;
//Function Declaration
void push(int n);
void pop();
void display();
void isEmpty();
void isFull();
//Main Method
int main ()
{
    int choice,n;
    top = -1;     //initialization condition

do {
        printf("\n------Stack Menu-------");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\n4. CHECK EMPTY");
        printf("\n5. EXIT");

        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter a Number to push : ");
                scanf("%d", &n);
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                isEmpty();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("\nInvalid Choice! Try Again!");
        }
    } while(1);
    return 0;
}

void push(int n)
{
    if (top == SIZE-1)
    {
        printf("\nstack is full!");
    } else {
        top++;
        stack[top] = n;
    }
    return;
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack is Empty!");
    }
    else
    {
        printf("\nPopped value : %d", stack[top--]);
    }
    return;
}

void display()
{
    for(int i = SIZE-1; i >= 0 ; i--)
    {
        printf("\n%d", stack[i]);
    }
    return;
}

void isEmpty()
{
    if (top == -1)
    {
        printf("\nStack is Empty!");
    } else {
        printf("\nStack is not Empty!");
    }
}

void isFull ()
{
    if (top == SIZE -1)
    {
        printf("\nStack is FULL !");
    } else{
        printf("\nStack is not full");
    }
    
}
