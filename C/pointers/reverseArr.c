#include<stdio.h>
void reverse(int *arr,int size){
	
	int i=0;
	int *endp = arr;
       	endp = endp+size;	
	printf("%d\n " ,*endp);
	while(i<size/2){
		i++;
		int temp = *arr;
		*arr = *endp;
		*endp = *arr;
		arr++;
		endp--;
	}
}


int main(){

	int arr[]= {1,2,3,4,5};
	
	int n = sizeof(arr)/sizeof(arr[0]);

	reverse(arr,n);
	
	for(int i=0;i<n;i++){

		printf("%d ",arr[i]);
	}

	return 0;
}



