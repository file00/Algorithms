// Max-Heap data structure in C

#include <stdio.h>

int size = 0;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int array[], int size, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < size && array[l] > array[largest])
        largest = l;
    if (r < size && array[r] > array[largest])
        largest = r;

    if (largest != i) {
        swap(&array[i], &array[largest]);
        heapify(array, size, largest);
    }
}

void insert(int array[], int newNum) {
    array[size] = newNum;
    size += 1;

    int current = size - 1;
    while (current != 0) {
        int parent = (current - 1) / 2;
        if (array[current] > array[parent]) {
            swap(&array[current], &array[parent]);
            current = parent;
        } else {
            break;
        }
    }
}

void deleteRoot(int array[], int num) {
    int i;
    for (i = 0; i < size; i++) {
        if (array[i] == num) break;
    }

    swap(&array[i], &array[size - 1]);
    
    // Reduce the size of the heap since the last element is now removed
    size -= 1;

    // Heapify from the current index to adjust the rest of the heap
    if (i < size) {
        heapify(array, size, i);
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int array[10];

    insert(array, 3);
    insert(array, 4);
    insert(array, 9);
    insert(array, 5);
    insert(array, 2);

    printf("Max-Heap array: ");
    printArray(array, size);

    deleteRoot(array, 4);
    printf("After deleting an element: ");
    printArray(array, size);

    return 0;
}