#include<stdio.h>

int main(){
	int arr[] = {1,2,3,4,5,6};

	int size = sizeof(arr)/sizeof(arr[0]);
	int k =3; //size of the subarray
	
	int sum = 0;

	for (int i=0;i<k;i++){
		sum+=arr[i];
	}
 	printf("subarray values %d ",sum);
	for(int j=k;j<size;j++){
//		int sumR = sum;
		sum += arr[j];
	        sum -= arr[j-k];
//       		if (sumR > sum)
//	 		sum = sumR;
		printf("%d ",sum);
	}

//	printf("The largest sum of subarray size %d is %d",k,sum);


	return 0;
}

