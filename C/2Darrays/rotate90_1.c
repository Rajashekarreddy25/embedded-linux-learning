#include<stdio.h>
int rotate(int n,int arr[n][n]){
	
	int trans[n][n];
	for (int i =0; i<n;i++){
		for(int j = 0;j<n;j++){
			trans[i][j] = arr[j][i];
		}
	}
	int res[n][n];
	for (int i=0 ;i<n;i++){
		for(int j=0;j<n;j++){
			res[i][j] = trans[i][n-1-j];
		}
	}
	printf("the arr after the rotation:\n");
	 for (int i=0 ;i<n;i++){
                for(int j=0;j<n;j++){
                       printf("%d ", res[i][j]);
                }
		printf("\n");
        }

	 return 0;
}

int main(){
	int n;
	printf("enter the size of the array");
	scanf("%d",&n);
	int arr[n][n];
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	rotate(n,arr);
	return 0;
}
