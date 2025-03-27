#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int findLongestConsecutiveSequence(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);

    int longest = 1, current = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            continue;
        }
        if (arr[i] == arr[i - 1] + 1) {
            current++;
        } else {
            longest = (current > longest) ? current : longest;
            current = 1;
        }
    }
    return (current > longest) ? current : longest;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findLongestConsecutiveSequence(arr, n);
    printf("%d\n", result);

    return 0;
}