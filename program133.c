//Practice of singly linked list;
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE head)
{
    printf("Linked list is :\n");

    while(head!=NULL)
    {
        printf("|%d|->",head->data);
        head=head->next;
    }
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

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        newn->next=*head;
        *head=newn;
    }
   printf("Insertfirst\n");
}

void InsertLast(PPNODE head,int no)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;  
    }
     printf("InsertLast\n");

}

void DeleteFirst(PPNODE head)
{
    PNODE temp=NULL;
    if((*head)==NULL)
    {
        return;
    }
    if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
    }
    else
    {
        temp=*head;
        *head=temp->next;
        free(temp);

    }
     printf("Deletefirst\n");

}

void DeleteLast(PPNODE head)
{
    
    PNODE temp=NULL;
    PNODE tempd=NULL;
    if((*head)==NULL)
    {
        return;
    }
    if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
    }
    else
    {
        temp=*head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        tempd=temp->next;
        temp->next=NULL;
        free(tempd);
    }
     printf("DeleteLast\n");

}

void InsertAtPos(PPNODE head,int no,int pos)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    int size=0,i=0;
    size=Count(*head);
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if((pos<1)||(pos>(size+1)))
    {
      printf("Invalid position\n");
      return;
    }
    if(pos==1)
    {
        InsertFirst(head,no);
    }
    if(pos=size+1)
    {
        InsertLast(head,no);
    }
    else
    {
        temp=*head;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next->next;
        temp->next=newn;
    
    }
     printf("Insertatpos\n");

}

void DeleteAtPos(PPNODE head,int pos)
{
    PNODE temp=NULL;
    PNODE tempd=NULL;
    int size=0,i=0;
    size=Count(*head);
    
    if((pos<1)||(pos>(size+1)))
    {
      printf("Invalid position\n");
      return;
    }
    if(pos==1)
    {
        DeleteFirst(head);
    }
    if(pos=size+1)
    {
        DeleteLast(head);
    }
    else
    {
        temp=*head;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
       
      temp->next=temp->next->next;
      tempd=(temp->next);
      free(tempd);
    }
     printf("Deleteatpos\n");

}


int main()
{
    PNODE first=NULL;
     int ret=0;

    InsertFirst(&first,101);   //Call by address
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertAtPos(&first,75,3);

    Display(first); 
    ret=Count(first);
    printf("Numbers of nodes are : %d\n",ret);

    DeleteAtPos(&first,3);

    Display(first); 
    ret=Count(first);
    printf("Numbers of nodes are : %d\n",ret);

    Display(first);   //Call by value
    ret=Count(first);
    printf("Numbers of nodes are : %d\n",ret);

    InsertFirst(&first,1);

    
    Display(first); 
    ret=Count(first);
    printf("Numbers of nodes are : %d\n",ret);

    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first); 
    ret=Count(first);
    printf("Numbers of nodes are : %d\n",ret);


    DeleteFirst(&first);
    DeleteFirst(&first);
    
    Display(first); 
    ret=Count(first);
    printf("Numbers of nodes are : %d\n",ret);

    DeleteLast(&first);

    Display(first); 
    ret=Count(first);
    printf("Numbers of nodes are : %d\n",ret);
  
    InsertAtPos(&first,1000,3);

    Display(first); 
    ret=Count(first);
    printf("Numbers of nodes are : %d\n",ret);

    return 0;
}