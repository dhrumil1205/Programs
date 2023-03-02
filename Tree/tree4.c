#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *left;
struct node *right;
}st;
st *root;
st *ptr;

//Node Creation;
st *createnode(int n)
{
st *new=malloc(sizeof(struct node));
new->data=n;
new->left=NULL;
new->right=NULL;
return new;
}
//Tree Creation;
//Binary Search Tree;
st *createTree(st *root,int n)
{
if(root==NULL)
{
root = createnode(n);
return root;
}

if(n>root->data)
{
root->right=createTree(root->right,n);
}
else if(n<root->data)
{
root->left=createTree(root->left,n);
}
return root;
}
//min value
int min(st *root)
{
if(root->left==NULL)
{
printf("%d is minimum\n",root->data);
return 0;
}
min(root->left);
}

//max value
int max(st *root)
{
if(root->right==NULL)
{
printf("%d is maximum\n",root->data);
return 0;
}
max(root->right);
}

//Display Inorder
void displayIn(st* root){

if(root->left!=NULL){
displayIn(root->left);
}
printf("%d\n",root->data);
if(root->right!=NULL){
displayIn(root->right);
}
}
//Display Pre
void displayPre(st* ptr){
printf("%d\n",ptr->data);
if(ptr->left!=NULL){
displayPre(ptr->left);
}
if(ptr->right!=NULL){
displayPre(ptr->right);
}
}
//Display Post
void displayPost(st* ptr){
if(ptr->left!=NULL){
displayPost(ptr->left);
}
if(ptr->right!=NULL){
displayPost(ptr->right);
}
printf("%d\n",ptr->data);
}



void main()
{
int n=0;
while(n!=-1)
{
printf("Enter the data :");
scanf("%d",&n);
if(n!=-1)
root = createTree(root,n);
}
printf("Display Inorder\n");
displayIn(root);
printf("Minimum value in left side :\n");
min(root);
printf("Maximum value in right side :\n");
max(root);

}
