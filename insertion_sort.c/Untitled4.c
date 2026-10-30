#include <stdio.h>

void insertionSort(int array[], int size)
{
    for (int position = 1; position < size; position++) {
        int key = array[position];
        int index = position - 1;

        while (index >= 0 && array[index] > key) {
            array[index + 1] = array[index];
            index--;
        }

        array[index + 1] = key;
    }
}

void printArray(const int array[], int size)
{
    for (int index = 0; index < size; index++) {
        printf("%d ", array[index]);
    }

    printf("\n");
}

int main(void)
{
    int numbers[] = {6, 3, 5, 2};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    printArray(numbers, size);

    insertionSort(numbers, size);

    printf("Sorted array:   ");
    printArray(numbers, size);

    return 0;
}
