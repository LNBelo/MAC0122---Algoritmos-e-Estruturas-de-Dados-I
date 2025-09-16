#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    int key;
    Node *left, *right, *p;
};

void preorder_tree_walk(Node *x){}

void inorder_tree_wallk(Node *x){}

void posorder_tree_walk(Node *x){}

int tree_maximum(Node *x){
    while (x -> right != NULL){
        x = x -> right;
    }
}

Node* tree_minimum_node(Node *x){}

int tree_successor(Node *x){
    if (x -> right != NULL)
        return tree_minimum_node(x -> right);
    Node *y = x -> p;
    while ((y != NULL) && (x == y -> right)) {
        x = y;
        y = x -> p;
    }
    return y;
}