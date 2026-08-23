#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,2,4,5,6,7};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The duplicate ele are :");
    for(int i=0; i<n; i++){
        for(int j = i+1;j<n;j++){
            
            if (arr[i] == arr[j]){
                printf(" %d ",arr[i]);
            }
            
        }
    }
}
