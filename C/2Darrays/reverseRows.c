#include<stdio.h>

int main(){

	int arr[3][3] = {{1,2,3},
			{4,5,6},
			{7,8,9}};


	for (int i = 0;i<3;i++){

		for(int j =0;j<3;j++){

			int start = 0;
			int end = 2;

			while(start < end){

				int temp = arr[start][j];

				arr[start][j] = arr[end][j];

				arr[end][j] = temp;

				start++;
				end--;
			}

		}

	}

	for (int i=0;i<3;i++){

		for (int j=0;j<3;j++){

			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}
