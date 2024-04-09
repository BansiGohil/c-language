//function to print reverse 1D array elements and print sum off all elements.
#include <stdio.h>

void printReverseAndSum(int arr[], int size) {
    int sum = 0;

    printf("Reverse array: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\nSum of elements in the array: %d\n", sum);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printReverseAndSum(arr, size);

    return 0;
}