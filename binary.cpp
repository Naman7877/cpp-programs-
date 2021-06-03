#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};


struct node* create()
{
    struct node* newnode= (struct node*) malloc(sizeof(struct node*));
    cout<<"enter tree data (if u finish the tree then write -1)"<<endl;
    int x;
    cin>>x;
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    cout<<"enter the left child "<<endl;
    newnode->left=create();
    cout<<"enter the value of right child "<<endl;
    newnode->right=create();
    return newnode;
}


int main()
{
    struct node* root=create();
    
    return 0;
}