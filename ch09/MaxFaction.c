// 求数组最大数
#include <stdio.h>

int Max(int arr[],int n);

int main(void){
    int array[] = {2,3,4,6,7,9,1};
    int numMax = 6;

    printf("%d\n",Max(array,numMax));

    return 0;
}

int Max(int arr[],int n){
    if (n == 0){
        return arr[0];
    }else {
        if (  Max(arr,n-1) > arr[n])
        {
            return Max(arr,n-1);
        }else {
            return arr[n];
        }
    }

}