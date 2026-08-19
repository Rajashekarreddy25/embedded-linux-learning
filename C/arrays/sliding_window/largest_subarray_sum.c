#include<stdio.h>

int main(){
	int arr[] = {1,2,3,4,5,6};

	int size = sizeof(arr)/sizeof(arr[0]);
	int k =3; //size of the subarray
	
	int sum = 0;

	for (int i=0;i<k;i++){
		sum+=arr[i];
	}

	for(int j=k;j<size;j++){
		sum += arr[j];
	       sum -= arr[j-k];
       		if (	       
