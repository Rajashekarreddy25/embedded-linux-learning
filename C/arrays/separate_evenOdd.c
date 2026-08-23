#include<stdio.h>

int main(){
	int arr[] = {7,3,5,2,4,5,3,6,3};

	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i = 0;i<n;i++){
		if (arr[i] %2 == 0){
			int j = i+1;
			while(j<n){
				if(arr[i] != 0){

					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
				else{
					j++;
				}
			}
		}

	}



	for(int i = 0;i<n;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}

