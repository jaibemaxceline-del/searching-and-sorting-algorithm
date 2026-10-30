#include <stdio.h>

void bubbleSort(int array[], int size)
{
    for (int pass = 0; pass < size - 1; pass++) {
        for (int index = 0; index < size - pass - 1; index++) {
            if (array[index] > array[index + 1]) {
                int temporary = array[index];

                array[index] = array[index + 1];
                array[index + 1] = temporary;
            }
        }
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
    int numbers[] = {7, 4, 2, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    printArray(numbers, size);

    bubbleSort(numbers, size);

    printf("Sorted array:   ");
    printArray(numbers, size);

    return 0;
}
