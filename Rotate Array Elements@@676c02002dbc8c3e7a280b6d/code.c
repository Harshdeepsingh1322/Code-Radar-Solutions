#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) {
    k = k % n; // Normalize k
    reverse(arr, 0, n - 1);         // Step 1: Reverse the whole array
    reverse(arr, 0, k - 1);         // Step 2: Reverse the first k elements
    reverse(arr, k, n - 1);         // Step 3: Reverse the rest
}

int main() {
    int n, k;
    scanf("%d", &n); // Input size of the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }
    scanf("%d", &k); // Input number of positions to rotate

    rotateArray(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]); // Print rotated array
    }
    return 0;
}