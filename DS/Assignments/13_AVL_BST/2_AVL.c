/*
2. Write a program to construct AVL Tree, as shown below:
i) Insert a new node
ii) Delete a node at any position in the tree.
iii) Check if the tree is balanced or not in every Insertion/Deletion.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * left, *right;
    int height;
}node;


int height(node * N)
{
    if(N==NULL)
    {
        return 0;
    }
    return N->height;
}

int max(int a,int b)
{
    return(a>b)?a:b;
}

node * createNode(int value)
{
    node *newNode=(node *)malloc(sizeof(node));
    newNode->data=value;
    newNode->left=newNode->right=NULL;
    newNode->height=1;

    return newNode;
}


node * rightRotate(node * y)
{
    node * x=y->left;
    node * t2=x->right;

    x->right=y;
    y->left=t2;

    y->height=max(height(y->right),height(y->left))+1;
    x->height=max(height(x->right),height(x->left))+1;

    return x;

}

node * leftRotate(node * x)
{
    node * y=x->right;
    node * t2=y->left;

    y->left=x;
    x->right=t2;

    y->height=max(height(y->right),height(y->left))+1;
    x->height=max(height(x->right),height(x->left))+1;
    
    return y;
}



int getBalance(node * N)
{
    if(N==NULL)
    {
        return 0;
    }
    return height(N->left)-height(N->right);
}

int isAvl(node * root)
{
    if(root==NULL)
    {
        return 1;
    }
    int balance =getBalance(root);
    if(balance>1||balance<-1)
    {
        return 0;
    }
    if(!isAvl(root->left)||!isAvl(root->right))
    {
        return 0;
    }
    return 1;

}

node * insert(node * root, int data)
{
    if(root==NULL)
    {
        return createNode(data);
    }
    if(data<root->data)
    {
        root->left=insert(root->left,data);
    }
    else if(data>root->data)
    {
        root->right=insert(root->right,data);
    }

    else
    {
        return root;
    }


    root->height=max(height(root->left),height(root->right))+1;

    int balance = getBalance(root);

    if(balance>1 &&data<root->left->data)
    {
        return rightRotate(root);
    }
    if(balance<-1 && data>root->right->data)
    {
        return leftRotate(root);
    }
    if(balance>1 && data>root->left->data)
    {
        root->left=leftRotate(root->left);
        return rightRotate(root);
    }
    if(balance<-1 && data<root->right->data)
    {
        root->right=rightRotate(root->right);
        return leftRotate(root);
    }

    return root;

}

node * findMin(node * root)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->left!=NULL)
    {
        return findMin(root->left);
    }  
    return root;
}


void inOrder(node * root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }

}

node * delete(node * root, int target)
{
    if (root==NULL)
    {
        return root;
    }

    if(target>root->data)
    {
        root->right=delete(root->right,target);
    }
    else if(target<root->data)
    {
        root->left=delete(root->left,target);
    }
    else
    {
        if((root->left==NULL) || (root->right==NULL))
        {
            node * temp=root->left?root->left:root->right;
            if(temp==NULL)
            {
                temp=root;
                root=NULL;
            }
            else
            {
                *root=*temp;
            }
            free(temp);
        }
        else
        {
            node * temp=findMin(root);
            root->data=temp->data;
            root->right=delete(root->right,temp->data);
        }

        if(root==NULL)
        {
            return root;
        }

        root->height=max(height(root->left),height(root->right))+1;

        int balance=getBalance(root);

        if(balance>1 && getBalance(root->left)>=0)
        {
            return rightRotate(root);
        }

        if(balance<-1 && getBalance(root->right)<0)
        {
            return leftRotate(root);
        }

        if(balance>1 && getBalance(root->left)<0)
        {
            root->left=leftRotate(root->left);
            return rightRotate(root);
        }

        if(balance <-1 && getBalance(root->right)>=0)
        {
            root->right=rightRotate(root->right);
            return leftRotate(root);
        }

        return root;
    }
}

int main()
{
    node* root=NULL;
    int data,target;
    while(1)
    {
        int button;
        printf("\npress 1 to insert a node.\npress 2 to delete a node.\npress 3 to check AVL tree.\npress 4 for inOrder traversal.\npress 5 for exit\n");
        scanf("%d", &button);
        switch(button)
        {
            case 1:
                printf("enter the data: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            
            case 2:
                printf("enter the target value: ");
                scanf("%d", &target);
                root=delete(root,target);
                break;
            
            case 3:
                if(isAvl(root))
                {
                    printf("balanced\n");
                }
                else
                {
                    printf("not balanced\n");
                }
                break;

            case 4:
                inOrder(root);
                break;
            
            case 5:
                exit(0);
        }
    }
    
}