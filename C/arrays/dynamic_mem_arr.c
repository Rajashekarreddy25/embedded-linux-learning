#include<stdio.h>
#include<stdlib.h>

int main(){

	int arr ;
	int *ptr= (int*)malloc(10*sizeof(int));

	for (int i=0;i<10;i++){

		scanf("%d",(ptr+i));
	}

	for (int i=0;i<10;i++){
		printf("%d",*(ptr+i));
	}

	return 0;
}

