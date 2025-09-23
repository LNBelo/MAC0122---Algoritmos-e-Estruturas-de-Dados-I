# include <stdio.h>

void insertion_sort(int A[], int n) {
	for (int j = 1; j < n; j++) {
		int key = A[j];
		int i = j - 1;
		while ((i >= 0) && (A[i] > key)) {
			A[i+1] = A[i];
			i--;
		}
		A[i+1] = key;
	}
}

void print_lista(int A[], int n) {
	printf("[");
	for (int i = 0; i < n; i++) {
		printf("%d,", A[i]);
	}
	printf("]\n\n");
}

int main() {
	int A[] = {3,7,28,-10,1,0,900,-500, 23672, 8,7};
	print_lista(A,11);
	insertion_sort(A,11);
	print_lista(A,11);
}
