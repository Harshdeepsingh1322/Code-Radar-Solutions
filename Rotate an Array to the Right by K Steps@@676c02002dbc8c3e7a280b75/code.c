#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k >= n
    int temp[k];
    
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i]; // Store the last k elements in a temporary array
    }

    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k]; // Shift the remaining elements to the right
    }

    for (int i = 0; i < k; i++) {
        arr[i] = temp[i]; // Place the last k elements at the beginning
    }
}

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    rotateArray(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}