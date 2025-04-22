/*
1. Write a program to construct a Binary Search Tree, as shown below:
i) Insert a new node to the BST.
ii) Find the lowest value in the BST.
iii) Delete a node in the BST.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left,*right;
}node;

node *createNode(int data)
{
    node * newNode=(node *)malloc(sizeof(node));
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}

node *searchBST(node * root, int target)
{
    if(root==NULL||root->data==target)
    {
        return root;
    }
    if(target>root->data)
    {
        return searchBST(root->right,target);
    }
    return searchBST(root->left,target);
}

node *insertInBST(node * root, int data)
{
    if(root==NULL)
    {
        return createNode(data);
    }
    if(data>root->data)
    {
        root->right=insertInBST(root->right,data);
    }
    else if(data<root->data)
    {
        root->left=insertInBST(root->left,data);
    }

}

void inOrder(node * root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

void postOrder(node * root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

void preOrder(node * root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
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

node * delete(node * root, int target)
{
    if(root==NULL)
    {
        return NULL;
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
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->right==NULL || root->left==NULL)
        {
            node *temp;
            if(root->right==NULL)
            {
                temp=root->left;
            }
            else
            {
                temp=root->right;
            }
            return temp;
        }
        else
        {
            node * temp=findMin(root->right);
            root->data=temp->data;
            root->right=delete(root->right, temp->data);
        }
    }
    return root;
}


int main()
{
    node* root=NULL;
    int data,target;
    while(1)
    {
        int button;
        printf("\npress 1 to insert a node.\npress 2 to find minimum value.\npress 3 to delete a node.\npress 4 for inOrder traversal.\npress 5 for preOrder traversal.\npress 6 for postOrder traversal.\npress 7 for exit.\n");
        scanf("%d", &button);
        switch(button)
        {
            case 1:
                printf("enter the data: ");
                scanf("%d", &data);
                if(root==NULL)
                {
                    root=insertInBST(root,data);
                }
                else
                {
                    insertInBST(root,data);
                }
                break;
            
            case 2:
                printf("minimum value is: %d", findMin(root)->data);
                break;
            
            case 3:
                printf("enter the target value: ");
                scanf("%d", &target);
                delete(root,target);
                break;

            case 4:
                inOrder(root);
                break;

            case 5:
                preOrder(root);
                break;

            case 6:
                postOrder(root);
                break;
            
            case 7:
                exit(0);
        }
    }
    
}