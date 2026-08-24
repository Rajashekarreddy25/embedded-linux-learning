#include<stdio.h>

int main(){

	int arr[] = {1,2,3,4,6,7,8};

	int n = sizeof(arr)/sizeof(arr[0]);

	int sum = (n*(n+1))/2;

	int arrSum = 0;
	for (int i = 0;i<n;i++){
		arrSum += arr[i];
	}

	int miss = sum - arrSum;
      printf("The missing no is :%d",miss);

return 0;
}
