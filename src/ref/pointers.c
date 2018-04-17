#include <stdio.h>

int main()
{
    int i = 10;
    int *j = &i;

    printf("value of i\t= %d\n", i);
    printf("address of i\t= %u\n", &i);

    *j += 40;

    printf("value of *j\t= %d\n", *j);
    printf("address of *j\t= %u\n", j);

    printf("value of i\t= %d\n", i);
    printf("address of i\t= %u\n", &i);

    return 0;
}