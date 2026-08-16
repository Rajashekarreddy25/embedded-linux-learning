#include<stdio.h>

int  prime(int num,int divisor){

	if (num < 2)
		return 0;
	if (divisor * divisor > num)
		return 1;
	if ( num % divisor == 0)
		return 0;

	return prime(num,divisor+1);

}

int main(){
	int num;
	printf("enter a num:");

	scanf("%d",&num);

	if(prime(num,2))
		printf("%d is a prime ",num);
	else
		printf("%d is not a prime",num);


	return 0;
}
