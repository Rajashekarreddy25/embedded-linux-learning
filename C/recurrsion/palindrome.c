#include<stdio.h>

void palindrome(int num ,int *rev){
	if( num <= 0)
		return ;

	int d = num %10;
	*rev = ((*rev)*10)+d;

	return palindrome(num/10,rev);
}

int main(){
	int num ;
	int rev = 0;

	printf("enter a num:");
	scanf("%d",&num);
	palindrome(num,&rev);

	if(num == rev)
		printf("palindrome \n");
	else 
		printf("not a palindrome");

	return 0;
}
