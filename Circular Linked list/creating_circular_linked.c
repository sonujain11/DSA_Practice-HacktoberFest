#include <stdio.h>
#include <stdlib.h>
#define null 0
typedef struct CircularLinkedList
{
int data;
struct CircularLinkedList *next;
}node;
node *getnode()
{
node *new;
int item;
printf("Enter the data ");
scanf("%d",&item);
new=(node*)malloc(sizeof(node));
new->data = item;
new->next = null;
return new;
}
int main()
{
node *head, *q, *x;
int i,n,ch;
printf("Enter the number of nodes ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
        if(i==0)
        {
            head = getnode();
            head->next=head;
            q=head;
        }
        else
        {
            x=getnode();
            q->next=x;
            x->next=head; 
            q=x;
        }
}
return 0;
}
