#include <stdio.h>

void binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return;
        } else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    printf("Element not found\n");
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = 6, key = 8;
    binarySearch(arr, n, key);
    return 0;
}
