#include <stdio.h>


main(void)
{
    int arr[] = {12,3,5,6};
    for (int i = 1; i < 4; i++)
    {
        int value = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > value)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",arr[i]);
    }
}