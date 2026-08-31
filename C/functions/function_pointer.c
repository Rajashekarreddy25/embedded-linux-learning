#include<stdio.h>

int add(int a,int b){

	return a+b;

}

int main(){

	int *fptr(int,int);


	fptr = add;



	printf("%d",fptr(2,2));

	return 0;
}
