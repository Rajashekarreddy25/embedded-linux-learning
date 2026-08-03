#include<stdio.h>
int no_iter = 0;
int fact(int n){

	if (n <=1){
		return 1;
	}
	no_iter++;
	return n*fact(n-1);
}
int main(){
	int n;
	printf("enter a no:");
	scanf("%d",&n);
	printf("fact:%d \n",fact(n));
	printf("no.of iterations:%d\n",no_iter);
	return 0;
}

