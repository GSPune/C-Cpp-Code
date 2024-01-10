#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//stack as a data structure using linked lists
/*
a.Item that comes in first is the last item removed.
(LIFO)
b.
*/

typedef struct node
{
    int number;
    struct node *next;
}node;

node *list = NULL;
node *temp = NULL;

void push(int val)
{
    temp = (node *)malloc(sizeof(node));
    temp->number = val;
    temp->next = list;

    list = temp;
}

int pop()
{
    node *n = NULL; //temporary pointer
    if (list == NULL) return -1;
    /*n = list;
    list = list->next;
    printf("The element popped is %d\n",n->number);
    free(n);*/

    n = list->next;
    //printf("The element popped is %d\n",list->number);
    int v = list->number;
    free(list);
    list = n;
    return v;

}

void peek()
{
    if (list == NULL)
    {
        printf("0 elements in stack currently.\n");
        return;
    }
    else{
    printf("The element at the top of the list is %d\n",list->number);}
}

void display(){
    if (list == NULL)
    {
        printf("0 elements in stack currently.\n");
        return;
    }
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%d ",tmp->number);
    }
    printf("\n");
}
void freenodes()
{
    while(list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
    printf("\nNodes freed.\n");
}

/*int main(void)
{
    int choice;
    printf("1.Push element in stack.\n");
    printf("2.Pop element from stack.\n");
    printf("3.Display elements of the stack.\n");
    printf("4.Peek at the front of the stack.\n");
    printf("5.Exit the program.\n");
    
    do{
        printf("\nEnter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                {
                    int x;
                    printf("Enter element to be pushed to stack!\n");
                    scanf("%d",&x);
                    push(x);
                    break;
                }
            case 2:
                {
                    pop();
                    break;
                }
            case 3:
                {
                    display();
                    break;
                }
            case 4:
                {
                    peek();
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