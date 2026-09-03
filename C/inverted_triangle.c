#include<stdio.h>

int main(){

	int n;
	printf("enter the value of N:");
	scanf("%d",&n);

	while(n != 0){

		for(int j = 1;j<=n;j++){

			printf("%d ",j);
		}

		printf("\n");
		n--;
	}

	return 0;
}
