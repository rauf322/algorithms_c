#include <stdio.h>

int main(void)
{
    int arr[] = {12,3,5,6};
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4-1-i;j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0;i<4;i++){
        printf("%d ",arr[i]);
    }
}