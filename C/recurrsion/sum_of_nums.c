#include<stdio.h>

void sumOfDigits(int num,int *sum){
	if (num == 0)
		return ;
	//*sum += num%10;
	return sumOfDigits(num/10,sum + (num%10));

}
int main(){
	int num;
	int sum = 0;
	printf("enter a num:");
	scanf("%d" , &num);

	sumOfDigits(num,&sum);

	printf("sum of digits :%d\n",sum);

	return 0;
}
