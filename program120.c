#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;  //4
    struct node *next;    //8
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int no)
{
    //allocate memory for node dynamically
    //initialise that node

    //chack whether LL is empty or not
    //if LL is empty then new node is the first node so update its address in the first poingter through head

    //if LL is not empty then store the address of first node in the next pointer ofnour new node
    //update the first pointer through head
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE)); //newn=(struct node*)malloc(12);

    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)  //LL is empty
    {
        *head=newn;

    }
    else   //LL contains at least one node
    {
        newn->next=*head;
        *head=newn;

    }
}

void InsertLast(PPNODE head,int no)
{
    //allocate memory for node dynamically
    //initialise that node

    //chack whether LL is empty or not
    //if LL is empty then new node is the first node so update its address in the first poingter through head

    //if LL is not empty then
    //travel till last node
    //store address of new node in next pointer of last node
    
    PNODE newn=NULL;
    PNODE temp=NULL;
    newn=(PNODE)malloc(sizeof(NODE)); //newn=(struct node*)malloc(12);

    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)  //LL is empty
    {
        *head=newn;

    }
    else   //LL contains at least one node
    {
        //Code
        //travel till last node
        //store address of new node in next pointer of last node
        temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }

}

void Display(PNODE head)
{
    printf("Elements from linked list are :\n");

    while(head!=NULL)
    {
        printf("|%d|->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}


int Count(PNODE head)
{int iCnt=0;

    while(head!=NULL)
    {
        iCnt++;
        head=head->next;
    }
    return iCnt;
}

int main()
{
    PNODE first=NULL;
    int ret=0;

    InsertFirst(&first,101);   //Call by address
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);   //Call by value
    ret=Count(first);
    printf("Numbers of nodes are : %d",ret);

    InsertFirst(&first,1);

    
    Display(first); 
    ret=Count(first);
    printf("Numbers of nodes are : %d",ret);

    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first); 
    
    return 0;
}


