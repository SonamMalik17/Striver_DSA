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
};
int main()
{
    Node* n1=new Node(10);
    cout<<n1->data<<endl;
    cout<<n1->next<<endl;
    return 0;
}