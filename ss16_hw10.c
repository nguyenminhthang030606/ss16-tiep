#include <stdio.h>

void remove_element(int arr[], int *size, int pos) {
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;\   
    print_array(arr, size);
    remove_element(arr, &size, 2);
    print_array(arr, size);
    
    return 0;
}

