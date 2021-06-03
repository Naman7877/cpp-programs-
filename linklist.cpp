#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node* next;
};
// head point the first node 

struct node* head=NULL;

// this function is use to create new node
struct node* create()
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node*));
    return newnode;
}

// we insert node at the fort of linklist

void insert_front()
{
    int x;
    cout<<"enter the value you want to add at the front side of linklist  "<<endl;
    cin>>x;
    struct node* newnode=create();
    newnode->data=x;
    newnode->next=head;
    head=newnode;

}

void insert_end()
{
    int x;
    cout<<"enter the value you want to add at the back side of linklist  "<<endl;
    cin>>x;
    struct node* newnode=create();
    newnode->data=x;
    struct node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
}

void reverse()
{
    cout<<"reverse data print"<<endl;
    struct node* previous=NULL;
    struct node* current=head;
    struct node* next_node=head;
    while(next_node!=NULL)
    {
        next_node=next_node->next;
        current->next=previous;
        previous=current;
        current=next_node;
    }
    head=previous;
}

void display()
{
    cout<<"display the linklist"<<endl;
    struct node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}


int main(){
    insert_front();
    insert_front();
    insert_front();
    insert_front();
    insert_front();
    insert_front();
    insert_front();
   
    reverse();
    display();

    
    return 0;
}