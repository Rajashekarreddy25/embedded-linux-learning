#include<stdio.h>

int binarySearch(int *arr,int n,int  k){
	
	int start = 0;
	int end = n-1;

	while(start<=end){
				
	int mid = start+(end-start)/2;

	if (arr[mid] == k)

		return mid;
	
	else if (k < arr[mid])
		end = mid-1;
	
	else 
		start = mid + 1;
	
	}
	return -1;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8};
	int n = sizeof(arr)/sizeof(arr[0]);

	int k;
	printf("enter a value to search:");
       	scanf("%d",&k);
	
	int pos = binarySearch(arr,n,k);

	if (pos != -1)
		printf("The value %d is at %dth index",k,pos);

	else
		printf("The given element is not found in the array");
	
	return 0;
}


