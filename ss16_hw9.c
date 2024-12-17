#include <stdio.h>

void insert(int arr[], int *size, int newValue, int position) {
    if (position < 0 || position > *size) {
        printf("Vi tri khong hop le.\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = newValue;
    (*size)++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[100] = {1, 2, 3, 4, 5}; 
    int size = 5;                 
    printf("Mang ban dau: ");
    printArray(arr, size);
    insert(arr, &size, 10, 2);
    printf("Mang sau khi them: ");
    printArray(arr, size);

    return 0;
}

