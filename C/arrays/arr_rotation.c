#include <stdio.h>
 int rotate(int arr[],int start,int end){
	while(start<end){
	       int temp = arr[start];	
	       arr[start] = arr[end];
	       arr[end] = temp;
	       start++;
	       end--;
	}
 }

int main(){

int arr[]= {1,2,3,4,5,6,7};

int n = sizeof(arr)/sizeof(arr[0]);

int k;
printf("enter the no.of to rotate");
scanf("%d",&k);
k= k%n;
rotate(arr,0,k-1);
rotate(arr,k,n-1);
rotate(arr,0,n-1);
for (int i=0;i<n;i++){
	printf("%d ",arr[i]);
}
return 0;
}


