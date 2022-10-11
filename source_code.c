// write a program to add all the elements of stack data structure
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int x)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = top;
    top = temp;
}
void pop()
{
    struct node *temp;
    if (top == NULL)
    {
        printf("Stack is empty ");
        return;
    }
    temp = top;
    top = top->next;
    free(temp);
}
void display()
{
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int n, i, x;
    printf("\n\n\n\nEnter the number of elements to be pushed into stack: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the element to be pushed into stack: ");
        scanf("%d", &x);
        push(x);
    }
    printf("The elements of stack are: ");
    display();
    printf(" ");
    pop();
    printf("The elements of stack after pop operation are: ");
    display();
    return 0;
}
