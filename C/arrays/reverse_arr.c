#include <stdio.h>

int main()
{
    // printf("Hello World");
    int arr[] = {1,2,3,4,5,6};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // int start = 0;
    // int end = n-1;
    
    // while(start<end){
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end]  = temp;
    //     start++;
    //     end--;
    // }
    
    
    for (int i=0 ;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
