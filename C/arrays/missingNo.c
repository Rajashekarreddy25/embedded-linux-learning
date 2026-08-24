#include<stdio.h>

int main(){

	int arr[] = {1,2,3,4,6,7,8};

	int n = sizeof(arr)/sizeof(arr[0]);

	int sum = ((n+1)*(n+2))/2;
	printf("sum of n nums is %d\n",sum);

	int arrSum = 0;
	for (int i = 0;i<n;i++){
		arrSum += arr[i];
	}
	 printf("ARRAY 	sum of n nums is %d\n",arrSum);
	int miss = sum - arrSum;
      printf("The missing no is :%d",miss);

return 0;
}
