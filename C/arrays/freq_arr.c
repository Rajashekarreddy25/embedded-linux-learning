#include<stdio.h>

int main(){
	int n;
	printf("enter the size of arr:");
	scanf("%d",&n);
	int arr[n];
	       //	= {1,2,3,4,5,2,4,3,1,10};
	
	//int n = sizeof(arr)/sizeof(arr[0]);
	int freq[n];
	printf("enter  the ele in the array:");
	for(int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
		freq[i] = 1;
	}
	
	for(int i=0; i<n;i++){
		
		if (freq[i] == 0)
			continue;
		for(int j = i+1;j<n;j++){
			if (freq[j] == 0)
				continue;
		
			if (arr[i] == arr[j]){
				freq[i++];
				freq[j] = 0;
			}
		}
	}
	
	for (int i =0;i<n;i++){
		if (freq[i] != 0)
			printf("The freq %d is %d\n",arr[i],freq[i]);
	}
	return 0;
}
		
