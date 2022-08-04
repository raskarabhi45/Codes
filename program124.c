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

void DeleteFirst(PPNODE head)
{
    PNODE temp=NULL;
    //if link list is empty then return
    //if LL contains at least one node then 
    //store the address of second node in the first pointer through head
    //and delete the first node
    if(*head==NULL)  //LL is empty
    {
        return;
    }
    else    //LL contains at least one node
    {
        temp=*head;
        *head=temp->next;
        free(temp);

    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp=NULL;
    //if LL is empty then return
    //if LL contains one node then delete that node and return
    //if LL contains more than one node then travel till last node and delete last node

    if(*head==NULL)
    {
        return;  //LL is empty
    }

    else if((*head)->next==NULL)//LL contains one node
    {
        free(*head);
        *head=NULL; //remember it 

    }

    else       //LL contains more than one node
    {
        temp=*head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;

    }

}

void InsterAtPos(PPNODE head,int no,int pos)
{   //consider number of nodes are 4

    //if position is in valid then return directly (<1 OR >5)
    //if position is 1 then InsertFirst
    //if position is n+1 then call InsertLast(position is 5)
    //
    int size=0,i=0;
    PNODE temp=NULL;
    PNODE newn=NULL;
    size=Count(*head);

    if((pos<1) ||(pos>(size+1)))   //filter
    {
        printf("Position is invalid\n");
        return;
    }

    if(pos==1)
    {
        InsertFirst(head,no);
    }

    else if(pos==(size+1))
    {
        InsertLast(head,no);
    }

    else
    {
        newn=NULL;
        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=no;
        newn->next=NULL;

        temp=*head;

        for(i=1;i<pos-1;i++)
        {  
            temp=temp->next;
       }
       newn->next=temp->next;
       temp->next=newn;

    }
}

void DeleteAtPosition(PPNODE head,int no,int pos)
{
    
}

int main()
{
    PNODE first=NULL;
    int ret=0;

    InsertFirst(&first,101);   //Call by address
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsterAtPos(&first,75,3);

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
  
    InsterAtPos(&first,1000,3);

    Display(first); 
    ret=Count(first);
    printf("Numbers of nodes are : %d\n",ret);

    
    return 0;
}


