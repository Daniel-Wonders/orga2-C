#include <stdio.h>

void rotar(int arr[], int len) {
    int head = arr[0];
    
    for (int i = 0; i < len - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    arr[len - 1] = head;

    // Imprimir array rotado
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[] = {1, 2, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    rotar(arr, len);

    return 0;
}
