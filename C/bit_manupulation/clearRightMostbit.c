#include<stdio.h>

int main(){

	int reg = 10;

	int res = reg&(reg-1);

	printf("%d ",res);

	return 0;
}
