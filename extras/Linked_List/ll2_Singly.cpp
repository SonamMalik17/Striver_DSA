#include<iostream>
using namespace std;
class Node
{
    public :
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        // memory free
        if(this->next!=NULL)
        {
            this->next=NULL;
            // delete this;
            // delete next;
            // this->next=NULL;
        }
        cout<<"Memory free for node with data : "<<value<<endl;
    }
};
void insertAtHead(Node* &head,Node* &tail,int d){
    // new node create
    Node* temp=new Node(d);
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    temp->next=head;
    head=temp;
}
void insertAtTail(Node*head,Node* &tail,int d){
    // new node create
    Node* temp=new Node(d);
    if(tail==NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    tail->next=temp;
    tail=temp;
    // or tail=tail->next;
}
void insertAtPosition(Node* &head,Node* &tail,int pos,int d)
{
    Node* temp=head;

    // inserting at start
    if(pos==1)
    {
        insertAtHead(head,tail,d);
        return;
    }


    int cnt=1;
    while(cnt<pos-1)
    {
        temp=temp->next;
        ++cnt;
    }


    // inserting at end
    if(temp->next==NULL)
    {
        insertAtTail(head,tail,d);
        return;
    }


    Node* ptr=new Node(d);
    ptr->next=temp->next;
    temp->next=ptr;
}
void deleteNodePos(Node* &head,Node* &tail,int pos)
{
    if(head==NULL)
    {
        cout<<"The Linked List is empty, no element present!!!"<<endl;
        return ;
    }
    Node* temp=head;
    // Deleting the start node
    if(pos==1)
    {
        if(head->next==NULL)
        {
            delete temp;
            head=NULL;
            tail=NULL;
            return;
        }
        head=head->next;
        // temp->next=NULL;
        delete temp;
    }
    else
    {
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<pos)
        {
            prev=curr;
            curr=curr->next;
            ++cnt;
        }
        if(curr->next==NULL)
            tail=prev;
        prev->next=curr->next;
        // curr->next=NULL;
        delete curr;
    }
}
void deleteNodeVal(Node* &head,Node* &tail,int val)
{
    if(head==NULL)
    {
        cout<<"The Linked List is empty, no element present!!!"<<endl;
        return ;
    }
    Node* temp=head;
    // Deleting the start node
    if(head->data==val)
    {
        if(head->next==NULL)
        {
            delete temp;
            head=NULL;
            tail=NULL;
            return;
        }
        head=head->next;
        delete temp;
    }
    else
    {
        Node* curr=head;
        Node* prev=NULL;
        while((curr->data)!=val)
        {
            prev=curr;
            curr=curr->next;
        }
        if(curr->next==NULL)
            tail=prev;
        prev->next=curr->next;
        delete curr;
    }
}
void print(Node* &head){
    if(head==NULL)
    {
        cout<<"Linked List is empty!!!"<<endl;
        return;
    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    print(head);
    insertAtHead(head,tail,12);
    print(head);
    insertAtHead(head,tail,15);
    print(head);
    insertAtTail(head,tail,17);
    print(head);
    insertAtTail(head,tail,18);
    print(head);
    insertAtPosition(head,tail,3,19);
    print(head);
    insertAtPosition(head,tail,1,29);
    print(head);
    insertAtPosition(head,tail,8,42);
    print(head);
    deleteNodePos(head,tail,3);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    deleteNodePos(head,tail,1);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    deleteNodePos(head,tail,6);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    deleteNodeVal(head,tail,10);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    deleteNodeVal(head,tail,15);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    deleteNodeVal(head,tail,18);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    return 0;
}