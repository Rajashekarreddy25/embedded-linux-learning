#include<stdio.h>

int main(){

	int arr[4][4] = {{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12},
			{13,14,15,16}};

	int n = 4;

	int top = 0;
	int left = 0;
	int bottom = n-1;
	int right = n-1;

	while((top < bottom) && (left < right)) {
		
		for(int col = 0;col<n;col++){

			printf("%d ",arr[top][col]);

		}
		top++;
		for(int row = top; row < n;row++){

			printf("%d ",arr[row][right]);
		}

		right--;

		for (int col = right;col >= left; col--){

			printf("%d " ,arr[bottom][col]);
		}

		bottom--;
		
		for(int row = bottom ;row >= top; row++){

			printf("%d ",arr[row][left]);
		}
		left++;
	}

return 0;
}


