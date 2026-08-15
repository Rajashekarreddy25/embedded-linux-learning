#include<stdio.h>

void reverse_num(int num,int *rev){
	if (num  <= 0)
		return ;
	int d = num%10;
	*rev = ((*rev)*10) +d;
	return reverse_num(num/10,&rev);
}
int main(){
	int num;
	int rev=0;
	printf("enter a number :");
	scanf("%d",&num);
	reverse_num(num,&rev);
	printf("The number %d after the reverse : %d\n",num,rev);

	return 0;
}


