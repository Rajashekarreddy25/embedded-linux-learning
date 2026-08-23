#include<stdio.h>

int sumOfArray(int *arr,int n){

//	int size = sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}

int main(){
	int n;
	printf("enter the size of the arr:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the arr elements");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The sum of given arr ele is :%d",sumOfArray(arr,n));

	return 0;
}


