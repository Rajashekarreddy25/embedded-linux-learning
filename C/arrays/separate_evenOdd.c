#include<stdio.h>

int main(){
	int arr[] = {7,3,5,2,4,5,3,6,3};

	int n = sizeof(arr)/sizeof(arr[0]);

/*	for(int i = 0;i<n;i++){
		if (arr[i] %2 == 0){
			int j = i+1;
			while(j<n && arr[j] %2 == 0){
				j++;
			}
			if(j<n){

					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				
			}
		}

	}	

*/

	int start = 0;
	int end = n-1;
	while(start<end){

		while(start<end && arr[start] != 0)
			start++;
		while(start < end && arr[end] == 0)
			end--;
		if(start < end){
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;

			start++;
			end--;
		}
	}

	for(int i = 0;i<n;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}

