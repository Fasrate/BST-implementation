#include<iostream>
using namespace std;

template<class T>
class BST
{
    private:
    struct node
    {
        T data;
        node* left;
        node* right;
    };
    
    public:
    node* root=NULL;
    void insert(T );
    bool search(T );
    void delet(T );
    void preorder();
    void inorder();
    void postorder();
    
    private:
    
    void insert(node* ,T );
    bool search(node* ,T );
    void preorder(node* );
    void inorder(node* );
    void postorder(node* );
};

template<class T>
void BST<T>::insert(T val)
{
    if(root==NULL)
    {
        root=new node;
        root->data=val;
        root->left=NULL;
        root->right=NULL;
    }
    else
    {
        insert(root,val);
    }
}

template<class T>
void BST<T>::insert(node* curr,T val)
{
    if(val<curr->data)
    {
        if(curr->left==NULL)
        {
            node* temp=new node;
            temp->data=val;
            temp->left=NULL;
            temp->right=NULL;
            curr->left=temp;
        }
        else
        {
            insert(curr->left,val);
        }
    }
    else
    {
         if(curr->right==NULL)
        {
            node* temp=new node;
            temp->data=val;
            temp->left=NULL;
            temp->right=NULL;
            curr->right=temp;
        }
        else
        {
            insert(curr->right,val);
        }
    }
}

template<class T>
bool BST<T>::search(node* curr,T val)
{
    if(curr==NULL)
    {
        return false;
    }
   
    if(curr->data==val)
    {
        return true;
    }
    if(val>curr->data)
    {
        return search(curr->right,val);
    }
    else
    {
        return search(curr->left,val);
    }
}

template<class T>
bool BST<T>::search(T val)
{
    
    return search(root,val);
}

template<class T>
void BST<T>:: preorder()
{
    if(root==NULL)
    {
        cout<<"Tree is empty"<<endl;
    }
    else
    {
        preorder(root);
        cout<<endl;
    }
}

template<class T>
void BST<T>:: preorder(node* curr)
{
    if(curr==NULL)
    {
        return;
    }
    cout<<curr->data<<",";
    preorder(curr->left);
    preorder(curr->right);
}

template<class T>
void BST<T>:: inorder(node* curr)
{
    if(curr==NULL)
    {
        return;
    }
    
    inorder(curr->left);
    cout<<curr->data<<",";
    inorder(curr->right);
}

template<class T>
void BST<T>:: inorder()
{
    if(root==NULL)
    {
        cout<<"Tree is empty"<<endl;
    }
    else
    {
        inorder(root);
        cout<<endl;
    }
}



template<class T>
void BST<T>:: postorder()
{
    if(root==NULL)
    {
        cout<<"Tree is empty"<<endl;
    }
    else
    {
        postorder(root);
        cout<<endl;
    }
}

template<class T>
void BST<T>:: postorder(node* curr)
{
    if(curr==NULL)
    {
        return;
    }
    
    postorder(curr->left);
    postorder(curr->right);
    cout<<curr->data<<",";
}

int main()
{
    BST<int>bst;
    
    bst.insert(1);
    bst.insert(2);
    bst.insert(3);
    bst.insert(4);
    
    bst.inorder();
    
    return 0;
}
