#include<stdio.h>

int reverse(int *arr,int start,int end){

	if (!start<end)
		return 0;

	return reverse(arr,start+1,end-1);
}

int main(){

	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	reverse(arr,0,n-1);

	for (int i = 0;i<n;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}

