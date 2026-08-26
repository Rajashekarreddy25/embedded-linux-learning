#include<stdio.h>

int main(){

	int arr[] = {2,3,5,1,4};

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
			printf("The equilibrium ele: %d ",arr[i]);
		}

		else{
			printf("No such ele:");
		}

	}

	return 0;
}

