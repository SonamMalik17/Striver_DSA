// reference from ll2_Singly.cpp
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
        // if(this->next!=NULL)
        // {
        //     this->next=NULL;
            // delete this;
            // delete next;
            // this->next=NULL;
        // }
        cout<<"Memory free for node with data : "<<value<<endl;
    }
};
void insertNode(Node* &tail,int element,int d)
{
    Node* temp=new Node(d);
    // empty list
    if(tail==NULL)
    {
        temp->next=temp;
        tail=temp;
        return;
    }
    else
    {
        Node* curr=tail;
        while(curr->data!=element)
            curr=curr->next;
        if(curr==tail)
            tail=temp;
        temp->next=curr->next;
        curr->next=temp;
    }

}
// delete node -----   (end waala nhi chla )
void deleteNode(Node* &tail,int val)
{
    // empty linked list
    if(tail==NULL)
    {
        cout<<"The Linked List is empty, no element present!!!"<<endl;
        return ;
    }
    // linked list containing single node
    else if(tail->next==tail)
    {
        Node*temp=tail;
        temp->next=NULL;
        tail=NULL;
        delete temp;
    }
    // linked list with more than one node
    else
    {
        Node* prev=NULL;
        Node* curr=tail->next;
        if(curr->data==val)
        {
            tail->next=curr->next;
            curr->next=NULL;
            delete curr;
            return;
        }
        while((curr->data)!=val)
        {
            prev=curr;
            curr=curr->next;
        }
        if(curr==tail)
            tail=prev;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(Node* &tail)
{
    if(tail==NULL)
    {
        cout<<"Linked List is empty!!!"<<endl;
        return;
    }
    else
    {
        Node* temp=tail->next;
        while(temp!=tail)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }   
        cout<<temp->data<<" ";
        cout<<endl;
    }
}
int main()
{
    Node* tail=NULL;
    // insertion in empty list
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,6);
    print(tail);
    insertNode(tail,6,12);
    print(tail);
    insertNode(tail,12,78);
    print(tail);
    insertNode(tail,6,77);
    print(tail);
    insertNode(tail,3,34);
    print(tail);
    insertNode(tail,78,33);
    print(tail);

    deleteNode(tail,12);
    print(tail);
    cout<<"Tail : "<<tail->data<<endl;
    deleteNode(tail,3);
    print(tail);
    cout<<"Tail : "<<tail->data<<endl;
    deleteNode(tail,34);
    print(tail);
    cout<<"Tail : "<<tail->data<<endl;
    deleteNode(tail,33);
    print(tail);
    cout<<"Tail : "<<tail->data<<endl;
    return 0;
}