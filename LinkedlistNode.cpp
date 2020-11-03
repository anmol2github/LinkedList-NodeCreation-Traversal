#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void print(Node *temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{
    int a,b,c;
    cout<<"Enter value in each Node";
    Node *first=NULL;
    Node *second=NULL;
    Node *third=NULL;
    first=new Node();
    second=new Node();
    third=new Node();
    cout<<"Enter value in node 1";
    cin>>a;
    first->data=a;
    first->next=second;
    cout<<"Enter value in node 2";
    cin>>b;
    second->data=b;
    second->next=third;
    cout<<"Enter value in third node";
    cin>>c;
    third->data=c;
    third->next=NULL;
    print(first);
}
