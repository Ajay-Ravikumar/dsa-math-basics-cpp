#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    struct Node *left, *right;
};

struct Node* newNode(int key) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key = key; node->left = node->right = NULL;
    return node;
}

struct Node* insert(struct Node* root, int key) {
    if (!root) return newNode(key);
    if (key < root->key) root->left = insert(root->left, key);
    else if (key > root->key) root->right = insert(root->right, key);
    return root;
}

int search(struct Node* root, int key) {
    if (!root) return 0;
    if (root->key == key) return 1;
    if (key < root->key) return search(root->left, key);
    return search(root->right, key);
}

void inorder(struct Node* root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30); insert(root, 20); insert(root, 40);
    insert(root, 70); insert(root, 60); insert(root, 80);

    inorder(root); printf("\n");
    printf("Search 40: %d\n", search(root, 40));
    return 0;
}
