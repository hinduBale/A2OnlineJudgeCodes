#include<iostream>
using namespace std;
struct node
{
    int val;
    node *lptr, *rptr;
};

struct node *newNode(int item)
{
    node *temp = new node;
    temp->val = item;
    temp->lptr = temp->rptr = NULL;
    return temp;
}

void inorder(struct node *root)
{
    if (root!=NULL)
    {
        inorder(root->lptr);
        cout<<root->val<<"  ";
        inorder(root->rptr);
    }
}

struct node* insert_node(struct node* node, int val)
{
    if (node == NULL) return newNode(val);
      if (val < node->val)
        node->lptr=insert_node(node->lptr,val);
    else if (val >= node->val)
        node->rptr = insert_node(node->rptr,val);
      return node;
}
int main()
{ int a;
    struct node *root = NULL;
    cout<<"Enter 10 numbers"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a;
        if(i==0)
            root=insert_node(root,a);
        else
            insert_node(root,a);
    }
     inorder(root);
}
