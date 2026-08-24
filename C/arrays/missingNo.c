#include<stdio.h>

int main(){

	int arr[] = {1,2,3,4,6,7,8};

	int n = sizeof(arr)/sizeof(arr[0]);
/*
	int sum = ((n+1)*(n+2))/2;
	printf("sum of n nums is %d\n",sum);

	int arrSum = 0;
	for (int i = 0;i<n;i++){
		arrSum += arr[i];
	}
	 printf("ARRAY 	sum of n nums is %d\n",arrSum);
	int miss = sum - arrSum;
      printf("The missing no is :%d",miss);
      */
	int Arrxor = 0;
	int xor = 0;
	for(int i=0;i<n;i++){
		Arrxor^=arr[i];
	}
	for (int i=1;i<=n+1;i++){
		xor ^= i;
	}
	int res = xor^Arrxor;
	printf("The missing no is %d",res);
		

return 0;
}
