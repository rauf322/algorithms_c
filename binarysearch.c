#include <stdio.h>

main(void)
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int number = 6;
    int low = 0;
    int high = sizeof(arr) / sizeof(arr[1]);
    while (low < high){
        int m = (low + high) / 2;
        int v = arr[m];
        if (v == number){
            printf("%d",arr[m]);
            return 0;
        }
        else if (v > number){
            high = m;
        }
        else{
            low = m + 1;
        }
    }

}