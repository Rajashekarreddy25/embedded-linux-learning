/*
#include<stdio.h>
int main(){

	int arr[] = {1,2,3,4};

	int n = 4;
	
	int prod = 1; 
	for (int i=0; i<n;i++){
		prod *=arr[i];
	}
	printf("%d \n",prod); 
	for(int i=0 ; i<n;i++){

		arr[i] = prod/arr[i];

		printf("%d ",arr[i]);
	}
	return 0;
}
*/

#include<stdio.h>

int main(){
	int arr[] = {1,2,3,4};

	int n = sizeof(arr)/sizeof(arr[0]);
	
	int arr1[n];
	for (int i = 0 ;i<n ;i++){
		int prod = 1;
		for(int j=0; j<n;j++){
			if (i != j){
				prod *= arr[j];
			}
		}
		arr1[i] = prod;

	}
	for(int i = 0;i<n;i++){
		printf("%d ",arr1[i]);
	}

	return 0;
}
			
