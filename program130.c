//Doubly Linked List  not getting output
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int  data;
    struct node *next;
    struct node *prev;            //*
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE head)
{
    printf("Data from linkded list is:\n");
    while(head!=NULL)
    {
        printf("|%d|<=>",head->data);
        head=head->next;    
    }
    printf("NULL\n");

}

int Count(PNODE head)
{
    int cnt=0;
    while(head!=NULL)
    {
        cnt++;
        head=head->next;    
    }

    return cnt;
}

void InsertFirst(PPNODE head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;     //*

    if(*head==NULL)    //if LL is empty
    {
        *head=newn;
    }
    else    //if LL contains at least one node
    {
        newn->next=*head;
        (*head)->prev=newn;   //*
        *head=newn;  
    }  
}

void InsertLast(PPNODE head,int no)
{
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;     //*

    if(*head==NULL)    //if LL is empty
    {
        *head=newn;
    }
    else    //if LL contains at least one node
    {
        *head=temp;
        while((temp->next)!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;     //*   temp->next->prev=temp;
    }

    
}

void DeleteFirst(PPNODE head)
{

}

void DeleteLast(PPNODE head)
{

}

void InsertAtPos(PPNODE head,int no,int pos)
{

}

void DeleteAtPos(PPNODE head,int pos)
{
    
}

int main()
{
    PNODE first=NULL;
    int ret=0;

    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,51);
    InsertLast(&first,101);

    Display(first);
    ret=Count(first);

    printf("Numbers of nodes are : %d\n",ret);

    return 0;
}