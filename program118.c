//Singly linear linked list.........
/*
InsertFirst
InsertLast
InsertAtPositiosn

DeleteFirst
DeleteLast
DeleteAtPosition

Display
Count
*/
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
/*
Algorithm to be follower

1. Allocate memory for node
2. Initialise the node
3. chack whether LL is empty or not
4. if LL is empty new node is first node
5. if LL contains atlest one node then store the address of previous node in next pointer of new node

*/

void InsertFirst(PPNODE Head,int iNo)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;

    if(*Head==NULL)   //if LL is empty
    {
        *Head=newn;
    }
    else   //If LL contains atleast one node
    {
        newn->next=*Head;
        *Head=newn;
    }
}

int main()
{
    PNODE First =NULL;  //struct node *First=NULL ;(Railway Engine)

    InsertFirst(&First,101);  //InsertFirst(60,101); diagram
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    return 0;
}


/*
Rules to be followed...........

1. Use only dynamic allocations
2. Dont write any any technical syntax in main
3. Dont use any global variables
4. Be careful while manipulating first pointer
5. Pass the first pointer directly if the function is not going to modify the LL
ex(Display,Count)
6. Pass the address of first if the function is going to modify the LL
ex(InsertFirst, InsertLast, InsertAtPositiosn,DeleteFirst,DeleteLast,DeleteAtPosition)
*/