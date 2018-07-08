#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void delete(struct node *head)
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
    if(head==NULL)
    {
        printf("\ndeleted successfully");
    }
}
void display(struct node *head)
{
    printf("\nafter delete");
    while(head!=NULL)
    {
        printf("\n%d",head->data);
        head=head->next;

    }
}
int main()
{
    struct node *head=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    printf("\n%d",head->data);
    printf("\n%d",second->data);
    printf("\n%d",third->data);
    delete(head);
    display(head);
    return 0;
}