#include <iostream>
#include <math.h>

using namespace std;

struct node
{
    int val;
    node *right;
    node *left;
    node *parent;
};

void insert(int val, node *parent)
{   
    // cout<<val<<" "<<parent->val<<"\n";
    if (parent->val == -1)
    {
        parent->val = val;
        return;
    }    
    
    if (val >= parent->val)
    {   
        if (parent->right == nullptr)
        {   
            node* right = new node;
            right->val = val;
            right->parent = parent;

            parent->right = right;
        }
        else
        {   
            insert(val, parent->right);
        }
    }

    else
    {
        if (parent->left == nullptr)
        {
            node* left = new node;
            left->val = val;
            left->parent = parent;

            parent->left = left;
        }
        else
        {
            insert(val, parent->left);
        }
    }
}

void inorder(node *root)
{
    // cout<<root->val<<"\n";
    if(root->right!=nullptr)
        inorder(root->right);
    cout<<root->val<<"\n";
    if(root->left!=nullptr)
        inorder(root->left);
    // cout<<root->val<<"\n";
}

bool search(node* root, int key)
{   
    if(root == nullptr)
        return false;

    if(key == root->val)
        return true;
    else if(key > root->val)
        return search(root->right, key);
    else 
        return search(root->left, key);
}

int main()
{
    int a[] = {3, 4, 1, 2, 5, 9, 7};
    int n = sizeof(a)/sizeof(a[0]);

    node root;
    root.val = -1;
    root.left = nullptr;
    root.right = nullptr;
    root.parent = nullptr;

    for(int i=0;i<n; i++)   insert(a[i], &root);

    inorder(&root);

    cout<<"search "<<search(&root, -1)<<"\n";

}