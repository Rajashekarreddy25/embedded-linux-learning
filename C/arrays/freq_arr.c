#include<stdio.h>

int main(){

	int arr[] = {1,2,3,4,5,2,4,3,1,10};
	
	int n = sizeof(arr)/sizeof(arr[0]);

	int freq[256]={0};
	
	for(int i=0; i<n;i++){
		freq[arr[i]++];
	}

	for(int i= 0 ;i<256;i++){
		if (freq[i] == 0)
			continue;
		else
			printf("The freq of %d is %d :",freq[arr[i]],freq[i]);

	}

	return 0;
}
		
