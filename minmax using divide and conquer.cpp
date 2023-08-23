#include <stdio.h>
void findMinAndMax(int arr[], int start, int end, int *minVal, int *maxVal) {
    if (start == end) {
        *minVal = arr[start];
        *maxVal = arr[start];
        return;
    }
    if (end - start == 1) {
        if (arr[start] < arr[end]) {
            *minVal = arr[start];
            *maxVal = arr[end];
        } else {
            *minVal = arr[end];
            *maxVal = arr[start];
        }
        return;
    }
    int mid = (start + end) / 2;
    int min1, max1, min2, max2;
    findMinAndMax(arr, start, mid, &min1, &max1);
    findMinAndMax(arr, mid + 1, end, &min2, &max2);
    *minVal = (min1 < min2) ? min1 : min2;
    *maxVal = (max1 > max2) ? max1 : max2;
}
int main() {
    int arr[] = {3, 5, 1, 9, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min_val, max_val;

    findMinAndMax(arr, 0, n - 1, &min_val, &max_val);
    printf("Minimum: %d\n", min_val);
    printf("Maximum: %d\n", max_val);

    return 0;
}

