#include<stdio.h>
int rotate90(int n,int arr[n][n]){
	 for (int i=0;i<n;i++){
                for(int j=0; j<n;j++){
                        int temp = arr[i][j];
                        arr[i][j] = arr[j][n-1-i];
                        arr[j][n-1-i] = temp;
                }
        }
}
int main(){

	int n;
	printf("enter the sixe of the array:\n");	 
	scanf("%d",&n);
	int arr[n][n];
	printf("enter the ele in arrays\n");
	
	for (int i=0 ;i<n;i++){
		for(int j=0 ; j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int res[n][n];
	for (int i=0;i<n;i++){
		for(int j=0; j<n;j++){
		//	int temp = arr[i][j];
			res[i][j] = arr[n-1-j][i];
		//	arr[j][n-i-1] = temp;
		}
	}


//	rotate90(n,arr);
	for (int i=0 ;i<n;i++){
                for(int j= 0; j<n;j++){
                        printf("%d ",res[i][j]);
                }
		printf("\n");
        }

	return 0;
}


