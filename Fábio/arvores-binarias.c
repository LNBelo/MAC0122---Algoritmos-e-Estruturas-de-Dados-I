# include <stdio.h>
# include <stdlib.h>

typedef struct Node Node;
typedef struct Tree Tree;

struct Node {
	int key;
	Node *left, *right, *p;
};

struct Tree {
	Node *root;
};

void preorder_tree_walk(Node *x) {
	if (x != NULL) {
		printf(" %d ",x->key);
		preorder_tree_walk(x->left);
		preorder_tree_walk(x->right);
	}
}

void inorder_tree_walk(Node *x) {
	if (x != NULL) {
		inorder_tree_walk(x->left);
		printf(" %d ",x->key);
		inorder_tree_walk(x->right);
	}
}

void reverse_inorder_tree_walk(Node *x) {
	if (x != NULL) {
		reverse_inorder_tree_walk(x->right);
		printf(" %d ",x->key);
		reverse_inorder_tree_walk(x->left);
	}
}

void posorder_tree_walk(Node *x) {
	if (x != NULL) {
		posorder_tree_walk(x->left);
		posorder_tree_walk(x->right);
		printf(" %d ",x->key);
	}
}

Node* tree_search(Node *x,int k) {
	if ((x == NULL) || (k == x->key))
		return x;
	if (k < x->key)
		return tree_search(x->left,k);
	return tree_search(x->right,k);
}

Node* iterative_tree_search(Node *x,int k) {
	while ((x != NULL) && (k != x->key))
		if (k < x->key) 
			x = x->left;
		else
			x = x->right;
	return x;
}

int tree_minimum(Node *x) {
	while (x->left != NULL) {
		x = x->left;
	}
	return x->key;
}

Node* tree_minimum_node(Node *x) {
	while (x->left != NULL) {
		x = x->left;
	}
	return x;
}

int tree_maximum(Node *x) {
	while (x->right != NULL) {
		x = x->right;
	}
	return x->key;
}

Node* tree_successor(Node *x) {
	if (x->right != NULL)
		return tree_minimum_node(x->right);
	Node* y = x->p;
	while ((y != NULL) && (x == y->right)) {
		x = y;
		y = x->p;
	}
	return y;
}

void insert(Tree* T, Node* N){
	Node* y = NULL; // invariante: y é pai de x
	Node* x = T->root; // x será a posição de N
	while (x != NULL) {
		y = x;
		if (N->key < y->key) 
			x = y->left;
		else
			x = y->right;
		}
	// Sabemos que x = NULL e y deve ser o pai de N
	N->p = y;
	
	if (y == NULL) // A árvore está vazia
		T->root = N; 
	else {
		if (N->key < y->key) 
			y->left = N;
		else
			y->right = N; 
		}
};
void delete(Tree* T, Node* N) {
	Node* y;
	if (N->left == NULL) || (N->right == NULL)
		y = N;
	else
		y = tree_successor(N);
	

};

void main() {

	Node *N2 = malloc(sizeof(Node));
	Node *N3 = malloc(sizeof(Node));
	Node *N5 = malloc(sizeof(Node));
	Node *N7 = malloc(sizeof(Node));
	Node *N11 = malloc(sizeof(Node));
/*	
	N2->key = 2;
	N2->left = NULL;
	N2->right = NULL;
	N2->p = N3;
	
	N3->key = 3;
	N3->left = N2;
	N3->right = N5;
	N3->p = N7;
	
	N5->key = 5;
	N5->left = NULL;
	N5->right = NULL;
	N5->p = N3;
	
	N7->key = 7;
	N7->left = N3;
	N7->right = N11;
	N7->p = NULL;
	
	N11->key = 11;
	N11->left = NULL;
	N11->right = NULL;
	N11->p = N7;
*/
/*	
	preorder_tree_walk(N7);
	printf("\n\n");

	inorder_tree_walk(N7);
	printf("\n\n");

	posorder_tree_walk(N7);
	printf("\n\n");

	reverse_inorder_tree_walk(N7);
	printf("\n\n");
*/



	//printf("O conteúdo da célula procurada é %d\n",iterative_tree_search(N7,3)->key);

/*	
	int b = 11;
	Node* N = iterative_tree_search(N7,b);
	Node* S = tree_successor(N);
	printf("O conteúdo do sucessor do nó %d é %d\n\n",
		b, S->key);
*/
/*	
	printf("O mínimo da árvore é %d\n",tree_minimum(N7));	
	printf("O máximo da árvore é %d\n",tree_maximum(N7));
*/

// TESTE DE INSERÇÃO

	N2->key = 2;
	N3->key = 3;
	N5->key = 5;
	N7->key = 7;
	N11->key = 11;
	
	Tree* T = malloc(sizeof(Tree));
	insert(T,N7);
	insert(T,N3);
	insert(T,N11);
	insert(T,N2);
	insert(T,N5);
	Node *N4 = malloc(sizeof(Node));
	N4->key = 4;
	Node *N6 = malloc(sizeof(Node));
	N6->key = 6;
	
	insert(T,N4);
	insert(T,N6);
	preorder_tree_walk(T->root);
	printf("\n");
	
	int b = 6;
	Node* N = tree_search(T->root,b);
	Node* S = tree_successor(N);
	printf("O conteúdo do sucessor do nó %d é %d\n\n",
	b, S->key);
	
	free(T);
	free(N2);
	free(N3);	
}
