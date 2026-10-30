#include <stdio.h>

void selectionSort(int array[], int size)
{
    for (int position = 0; position < size - 1; position++) {
        int minimumIndex = position;

        for (int index = position + 1; index < size; index++) {
            if (array[index] < array[minimumIndex]) {
                minimumIndex = index;
            }
        }

        if (minimumIndex != position) {
            int temporary = array[position];

            array[position] = array[minimumIndex];
            array[minimumIndex] = temporary;
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
    int numbers[] = {20, 12, 8, 15};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    printArray(numbers, size);

    selectionSort(numbers, size);

    printf("Sorted array:   ");
    printArray(numbers, size);

    return 0;
}
