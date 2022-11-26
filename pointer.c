#include <stdio.h>
int main()
{
    int arr[] = {23, 43, 23, 12, 44, 556};
    int *p = arr;
    printf("%d\n", *p);
    (*p)++;
    printf("%d\n", *p);
    *(p++);
    printf("%d\n", *p);
    return 0;
}