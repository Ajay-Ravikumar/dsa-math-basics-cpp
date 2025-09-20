#include <stdio.h>
#include <stdlib.h>

struct Node{
int val;
struct Node* left;
struct Node* right;
};

struct Node* newNode(int v){
struct Node* n = (struct Node*)malloc(sizeof(struct Node));
n->val = v; n->left = n->right = NULL;
return n;
}

void preorder(struct Node* root){
if(!root) return;
printf("%d ", root->val);
preorder(root->left);
preorder(root->right);
}

void inorder(struct Node* root){
if(!root) return;
inorder(root->left);
printf("%d ", root->val);
inorder(root->right);
}

void postorder(struct Node* root){
if(!root) return;
postorder(root->left);
postorder(root->right);
printf("%d ", root->val);
}

int main(){
struct Node* root = newNode(1);
root->left = newNode(2);
root->right = newNode(3);
root->left->left = newNode(4);
root->left->right = newNode(5);

printf("Preorder: "); preorder(root); printf("\n");
printf("Inorder: "); inorder(root); printf("\n");
printf("Postorder: "); postorder(root); printf("\n");
return 0;
}
