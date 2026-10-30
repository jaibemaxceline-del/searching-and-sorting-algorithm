#include <stdio.h>

/*
 * The array must already be sorted in ascending order.
 * Returns the index of the target, or -1 if not found.
 */
int binarySearch(const int array[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == target) {
            return mid;
        } else if (array[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target;
    int result;

    printf("Sorted array: 10 20 30 40 50 60 70\n");
    printf("Enter the number to search for: ");

    if (scanf("%d", &target) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    } 0

    result = binarySearch(numbers, size, target);

    if (result != -1) {
        printf("%d was found at index %d.\n", target, result);
    } else {
        printf("%d was not found in the array.\n", target);
    }

    return 0;
}
