#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dynamically allocate an integer
    int *p = (int *)malloc(sizeof(int));

    if (p == NULL)
    {
        printf("Memory for integer could not be allocated");
        exit(0);
    }

    // Set dynamically allocated memory to contain 10
    *p = 10;

    // Free said allocated memory
    free(p);

    // Dynamically allocate an array of five integers
    int element_count = 5;
    int *arr = (int *)calloc(element_count, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory for arr[5] could not be allocated");
        exit(0);
    }

    // Set first array element to 3
    arr[0] = 3;

    // Set third array element to 2
    arr[2] = 2;

    // Print all values
    for (int i = 0; i < element_count; i++)
    {
        printf("arr[%d]\t= %d\n", i, arr[i]);
    }

    printf("After resize:\n");

    // Resize array to fit 3 elements
    element_count = 3;
    arr = realloc(arr, element_count * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory for arr[5] could not be allocated");
        exit(0);
    }

    // Print all values
    for (int i = 0; i < element_count; i++)
    {
        printf("arr[%d]\t= %d\n", i, arr[i]);
    }

    // Free space allocated by array
    free(arr);

    return 0;
}