#include<stdio.h>

int sumOfDigits(int num){
		//,int *sum){
	if (num == 0)
		return 0;
//	*sum += num%10;
//	return sumOfDigits(num/10,sum);
	return (num%10)+sumOfDigits(num/10);
}
int main(){
	int num;
	int sum = 0;
	printf("enter a num:");
	scanf("%d" , &num);

//	sumOfDigits(num,&sum);

	printf("sum of digits :%d\n",sumOfDigits(num));

	return 0;
}
