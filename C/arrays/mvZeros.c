#include<stdio.h>

int main(){
	int arr[] = {1,0,2,0,4,0,2,5,7,8};

	int n = sizeof(arr)/sizeof(arr[0]);

	int start = 0;
	int end = n-1;

	while (start < end){

		while(start < end && arr[start] != 0){
			start++;
		}
		while (start < end && arr[end] == 0){
			end--;
		}

		if (start < end ){
			int temp = arr[start] ;
			arr[start] = arr[end];
			arr[end] = temp;

			start++;
			end--;
		}
	}

	for(int i =0;i<n;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}
