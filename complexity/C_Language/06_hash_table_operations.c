#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

struct Node {
    int key;
    struct Node* next;
};

struct Node* hashTable[SIZE];

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key) {
    int idx = hashFunction(key);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key; newNode->next = hashTable[idx];
    hashTable[idx] = newNode;
}

void deleteKey(int key) {
    int idx = hashFunction(key);
    struct Node* temp = hashTable[idx], *prev = NULL;
    while (temp) {
        if (temp->key == key) {
            if (prev) prev->next = temp->next;
            else hashTable[idx] = temp->next;
            free(temp); return;
        }
        prev = temp; temp = temp->next;
    }
}

int search(int key) {
    int idx = hashFunction(key);
    struct Node* temp = hashTable[idx];
    while (temp) {
        if (temp->key == key) return 1;
        temp = temp->next;
    }
    return 0;
}

void display() {
    for (int i=0; i<SIZE; i++) {
        printf("%d:", i);
        struct Node* temp = hashTable[i];
        while (temp) {
            printf(" -> %d", temp->key);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    insert(15); insert(11); insert(27); insert(8); insert(12);
    display();
    printf("Search 12: %d\n", search(12));
    deleteKey(12);
    display();
    return 0;
}
