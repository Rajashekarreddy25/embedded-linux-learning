#include<stdio.h>

int main(){
	int arr[] = {1,2,3,4,5,6};

	int size = sizeof(arr)/sizeof(arr[0]);
	int k =3; //size of the subarray
	
	int window_sum = 0;

	for (int i=0;i<k;i++){
		window_sum += arr[i];
	}
 	printf("sum of subarray values of size :%d is  %d ",k,window_sum);
	for(int j=k;j<size;j++){
		window_sum += arr[j];
	        window_sum -= arr[j-k];
	
			printf("%d ",window_sum);
	
	}


	return 0;
}

