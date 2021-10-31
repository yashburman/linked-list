#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node* link;
};
struct node *head=NULL;
struct node *cur; 
void addnode();
void display();
void main()
{
    int count;
    printf("\nEnter no.of nodes\n");
    scanf("%d",&count);
    for(int i=0;i<count;i++)
    {
        addnode();
    }
    printf("\nDisplaying the list...\n");
    display();
    return;
}
void addnode()
{
    struct node *temp;int data;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->link=NULL;
    printf("\nEnter data\n");
    scanf("%d",&data);
    temp->data=data;
    if(head==NULL)
        head=temp;
    else
    {
        cur=head;
        while(cur->link!=NULL)
        {
            cur=cur->link;
        }
        cur->link=temp;
    }
}
void display()
{
    cur=head;
    while(cur!=NULL)
    {
        printf("%d->",cur->data);
        cur=cur->link;
    }
    printf("end");
}