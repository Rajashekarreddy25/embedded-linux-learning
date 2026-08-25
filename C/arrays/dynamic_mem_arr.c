#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n ;
	printf("enter the size of the arr:");
	scanf("%d",&n);

	int *ptr= (int*)malloc(10*sizeof(int));
	
	printf("enter the %d values into the arr",n);
	for (int i=0;i<10;i++){

		scanf("%d",(ptr+i));
	}

	for (int i=0;i<10;i++){
		printf("%d",*(ptr+i));
	}

	return 0;
}

