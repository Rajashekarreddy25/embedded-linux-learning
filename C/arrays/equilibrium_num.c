#include<stdio.h>

int main(){

	int arr[] = {2,5,5,1,4};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	int found = 0;
	for (int i =0;i<n;i++){

		int left_arr_sum = 0;
		int right_arr_sum = 0;

		for (int j = i+1;j<n;j++){
			right_arr_sum += arr[j];
		}

		for(int k = i-1;k>=0;k--){
			left_arr_sum += arr[k];
		}

		if (left_arr_sum == right_arr_sum){
			found = 1;
			printf("The equilibrium ele: %d ",arr[i]);
		}
         /*
		else{
			printf("No such ele:");
		}
*/
	}
	if (!found){
		printf("no such ele:");
	}


	return 0;
}

