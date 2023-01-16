#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left,*right;
};
//creation of node
struct node* create(int val)
{
	struct node*newnode=malloc(sizeof(struct node));
	newnode->data=val;
	newnode->right=NULL;
	newnode->left=NULL;
	return newnode;
}
//insertion of node

struct node*insert(struct node*root,int val)
{
if(root==NULL)
return create(val);
else if(val>root->data)
root->right=insert(root->right,val);
else
root->left=insert(root->left,val);
return root;
}

//finding minimum value of node
struct node*minv(struct node* node)
{
    struct node* current=node;
    while(current&&current->left!=NULL)
    current=current->left;
    return current;
}
//deletion
struct node *del(struct node* root,int data)
{
if(root==NULL)
return root;
if(data<root->data)
root->left=del(root->left,data);
else if(data>root->data)
root->right=del(root->right,data);
else
{
    if(root->left==NULL)
    {struct node*temp=root->right;
    free(root);
    return temp;
    }
    else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
     struct node* temp = minv(root->right);
     root->data = temp->data;
     root->right = del(root->right, temp->data);
}
return root;
}



//In order traversal
void intrav(struct node* root)
{
if(root==NULL)
return;
intrav(root->left);
printf("%d->",root->data);
intrav(root->right);
}
//preorder traversal
void pretrav(struct node* root)
{
if(root==NULL)
return;
printf("%d->",root->data);
pretrav(root->left);
pretrav(root->right);
}
//postorder traversal
void posttrav(struct node* root)
{
if(root==NULL)
return;
posttrav(root->left);
posttrav(root->right);
printf("%d->",root->data);
}


void main()
{
int c,n,x,i,j;
do
{
printf("Enter the choice\n0.Exit\n 1.Creation of BST\n2.Insertion\n3.preoder taversal\n4.inorder traversal\n5.post order traversal\n6.Deletion\n");
scanf("%d",&c);
switch(c)
{
case 1:printf("Enter the value of root to be inserted\n");
	scanf("%d",&x);
	struct node*root=create(x);
	break;
case 2:printf("Enter the number of nodes to be inserted\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the value for node\n");
	scanf("%d",&j);
	insert(root,j);
	}
	break;

case 3:pretrav(root);
	break;
case 4:intrav(root);
	break;
case 5:posttrav(root);
	break;
case 6:printf("Enter the value of node to be deleted\n");
        scanf("%d",&x);
        root=del(root,x);
        break;
default: printf("Invalid choice\n");
	break;
}
}
while(c!=0);
}
