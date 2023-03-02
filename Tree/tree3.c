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


}
