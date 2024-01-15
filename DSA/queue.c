#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//queue as a data structure using linked lists
/*
a.Item that comes in first is the first item removed.
(FIFO)
b.
*/

typedef struct node
{
    int number;
    struct node *next;
}node;

node *front = NULL;
node *rear = NULL;
node *temp = NULL;

void enqueue(int val)
{
    if (rear == NULL) //no elements in queue
    {
        rear = (node *)malloc(sizeof(node));
        rear->number = val;
        rear->next = NULL;
        front = rear;
    }
    else
    {
        temp = (node *)malloc(sizeof(node));
        rear->next = temp;
        temp->number = val;
        temp->next = NULL;
        rear = temp;
    }

}

int dequeue()
{
    node *n = NULL; //temporary pointer
    if (front == NULL) return -1;

    else if (front->next != NULL)
    {
        n = front->next;
        //printf("The element popped is %d\n",front->number);
        int v = front->number;
        free(front);
        front = n;
        return v;
    }
    else //only one element
    {
        int v = front->number;
        free(front);
        front = NULL;
        rear = NULL;   
        return v;
    }
}

void top()
{
    if (front == NULL)
    {
        printf("0 elements in queue currently.\n");
        return;
    }
    else{
    printf("The element at the top of the queue is %d\n",front->number);}
}

void display(){
    if (front == NULL)
    {
        printf("0 elements in queue currently.\n");
        return;
    }
    for (node *tmp = front; tmp != NULL; tmp = tmp->next)
    {
        printf("%d ",tmp->number);
    }
    printf("\n");
}
void freenodes()
{
    while(front != NULL)
    {
        node *tmp = front->next;
        free(front);
        front = tmp;
    }
    printf("\nNodes freed.\n");
}

/*int main(void)
{
    int choice;
    printf("1.Push element in queue.\n");
    printf("2.Pop element from queue.\n");
    printf("3.Display elements of the queue.\n");
    printf("4.Peek at the front of the queue.\n");
    printf("5.Exit the program.\n");
    
    do{
        printf("\nEnter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                {
                    int x;
                    printf("Enter element to be pushed to queue!\n");
                    scanf("%d",&x);
                    enqueue(x);
                    break;
                }
            case 2:
                {
                    dequeue();
                    break;
                }
            case 3:
                {
                    display();
                    break;
                }
            case 4:
                {
                    top();
                    break;
                }
            case 5:
                {
                    printf("....Exiting the program!....\n");
                    break;
                }
            default:
            {
                printf("Invalid choice!\n");
            }
        }
    }
    while(choice != 5);
    freenodes();
    return 0;
}*/