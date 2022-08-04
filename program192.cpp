//Singly Linear Linked list in Generic programming
#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class SinglyLL
{
    private:
    struct node<T> *head;
    int count;

    public:
    SinglyLL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void InsertAtpos(T no,int pos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int pos);
    void Display();
    int CountNode();
 
};

template<class T>
SinglyLL<T>::SinglyLL()
{
    head=NULL;
    count=0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
    struct node<T> *newn=NULL;
    newn=new node<T>;

    newn->data=no;
    newn->next=NULL;

    if(head==NULL)
    {
        head=newn;
    }
    else
    {
        newn->next=head;
        head=newn;
    }
    count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T no)
{
    struct node<T> *newn=NULL;
    newn=new node<T>;

    newn->data=no;
    newn->next=NULL;

    if(head==NULL)
    {
        head=newn;
    }
    else
    {
        struct node<T> *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
    count++;
}
/*
template<class T>
void SinglyLL<T>::InsertAtPos(T no,int pos)
{
    if((pos<1)||(pos>count+1))
    {
        cout<<"Invalid position"<<endl;
        return;
    }

    if(pos==1)
    {
        InsertFirst(no);
    }

    else if(pos==count+1)
    {
        InsertLast(no);
    }

    else
    {
        struct node<T> *newn=NULL;
        newn=new node;

        newn->data=no;
        newn->next=NULL;

        struct node<T> *temp=head;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        count++;
    }
    
}*/

template<class T>
void SinglyLL<T>::DeleteFirst()
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        struct node<T> *temp=head;
        head=temp->next;
        delete temp;
    }
    count--;
}

template<class T>
void SinglyLL<T>::DeleteLast()
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        struct node<T> *temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    count--;
}

template<class T>
void SinglyLL<T>::DeleteAtPos(int pos)
{
    if((pos<1)||(pos>count))
    {
        cout<<"Invalid position"<<endl;
        return;
    }

    if(pos==1)
    {
       DeleteFirst();
    }

    else if(pos==count)
    {
        DeleteLast();
    }

    else
    {
        struct node<T> *temp=head;
        struct node<T> *tempd=NULL;
        for(int i=0;i<count-1;i++)
        {
            temp=temp->next;
        }
        tempd=temp->next;
        temp->next=temp->next->next;
        delete tempd;

        count--;

    }
}


template<class T>
void SinglyLL<T>::Display()
{
    cout<<"Elements of the linked list are :"<<endl;
    struct node<T> *temp=head;
    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
    }
    cout<<endl;
}

template<class T>
int SinglyLL<T>::CountNode()
{
    return count;
}

int main()
{
    SinglyLL<int>obj1;
    SinglyLL<char>obj2;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.InsertLast(101);
    obj1.InsertLast(111);
    

    obj1.Display();

    obj1.DeleteFirst();
    obj1.DeleteLast();
    obj1.Display();


    obj2.InsertFirst('C');
    obj2.InsertFirst('B');
    obj2.InsertFirst('A');
    obj2.InsertLast('D');
    obj2.InsertLast('E');
    obj2.Display();


    return 0;
}