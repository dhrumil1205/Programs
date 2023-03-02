#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *left;
struct node *right;
}st;
st *start;
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
st *createTree(st *root)
{
int n;
printf("Enter the data :");
scanf("%d",&n);
if(n==-1)
{
return NULL;
}
root = createnode(n);
printf("left of %d : \n",root->data);
root->left=createTree(root->left);
printf("right of %d : \n",root->data);
root->right=createTree(root->right);
return root;
}
//Display Inorder
void displayIn(st* ptr){

if(ptr->left!=NULL){
displayIn(ptr->left);
}
printf("%d\n",ptr->data);
if(ptr->right!=NULL){
displayIn(ptr->right);
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
st *root;
root = createTree(root);
printf("Display Inorder\n");
displayIn(root);
printf("Display Postorder\n");
displayPost(root);
printf("Display Preorder\n");
displayPre(root);
}
