#include <stdio.h>
void sortArray(int arr[], int n) {
	int i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
	while (low <= high) {
        int mid = low + (high - low) / 2;
		if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
	return -1; 
}
int main() {
    int arr[100], n,i, target, result;
	printf("Enter the number of elements: ");
    scanf("%d", &n);
	printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sortArray(arr, n);
	printf("Enter the element to search: ");
    scanf("%d", &target);

    result = binarySearch(arr, n, target);
    if (result != -1)
        printf("Element %d found at index a[%d]\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}

