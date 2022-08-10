// Insertion Short
#include <stdio.h>
void InsertionShort(int array[], int size)
{
    int n = size;
    for (int i = 1; i < n; i++)
    {
        int key = array[i]; // means the second element
        int j = i - 1;      // 1st element
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            j--; // decrease the j
        }
        array[j + 1] = key;
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main()
{
    int ARRAY[] = {-5,5, 4, 3, 2, 1};
    int size = sizeof(ARRAY) / sizeof(ARRAY[0]);
    printf("Original array ; \n");
    printArray(ARRAY, size);
    InsertionShort(ARRAY, size);
    printf("Shorted  array ; \n");
    printArray(ARRAY, size);
}