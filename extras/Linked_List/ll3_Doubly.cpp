#include<iostream>
using namespace std;
class Node
{
    public :
    int data;
    Node* prev;
    Node* next;
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        // if(this->next!=NULL)
        //     this->next=NULL;
        // if(this->prev!=NULL)
        //     this->prev=NULL;
        cout<<"Memory free for node with data : "<<value<<endl;
    }
};
void insertAtHead(Node* &head,Node* &tail,int d)
{
    Node* temp=new Node(d);
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node*head,Node* &tail,int d)
{
    Node* temp=new Node(d);
    if(tail==NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
void insertAtPosition(Node* &head,Node* &tail,int pos,int d)
{
    if(pos==1)
    {
        insertAtHead(head,tail,d);
        return;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<pos-1)
    {
        temp=temp->next;
        ++cnt;
    }
    if(temp->next==NULL)
    {
        insertAtTail(head,tail,d);
        return;
    }
    Node* ptr=new Node(d);
    ptr->next=temp->next;
    ptr->prev=temp;
    temp->next->prev=ptr;
    temp->next=ptr;
}
// Copied from singly
void deleteNodePos(Node* &head,Node* &tail,int pos)
{
    // Deleting the start node
    if(head==NULL)
    {
        cout<<"The Linked List is empty, no element present!!!"<<endl;
        return ;
    }
    Node* temp=head;
    if(pos==1)
    {
        if(head->next==NULL)
        {
            delete temp;
            head=NULL;
            tail=NULL;
            return;
        }
        temp->next->prev=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node* curr=head;
        Node* previous=NULL;
        int cnt=1;
        while(cnt<pos)
        {
            previous=curr;
            curr=curr->next;
            ++cnt;
        }
        previous->next=curr->next;
        if(curr->next==NULL)
        {
            curr->prev=NULL;
            tail=previous;
            delete curr;
            return;
        }
        curr->next->prev=previous;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
    }
}
// Traversing a Linked List
void print(Node* &head)
{
    if(head==NULL)
    {
        cout<<"Linked List is empty!!!"<<endl;
        return;
    }
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
// Gives the length of Linked List
int getLength(Node* &head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        ++len;
        temp=temp->next;
    }
    return len;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    // Node* n1=new Node(10);
    // Node* head=n1;
    // Node* tail=n1;
    print(head);
    // cout<<"Length : "<<getLength(head)<<endl;
    insertAtHead(head,tail,12);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    insertAtHead(head,tail,5);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    insertAtHead(head,tail,11);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    // cout<<"Length : "<<getLength(head)<<endl;
    insertAtTail(head,tail,17);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    insertAtTail(head,tail,18);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    insertAtTail(head,tail,20);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    insertAtPosition(head,tail,4,43);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    insertAtPosition(head,tail,2,50);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    insertAtPosition(head,tail,1,63);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    insertAtPosition(head,tail,10,70);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    deleteNodePos(head,tail,1);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    deleteNodePos(head,tail,4);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    deleteNodePos(head,tail,8);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    return 0;
}