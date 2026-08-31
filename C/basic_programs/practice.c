#include<stdio.h>
#include<string.h>

int main(){
	/*
	int a[] = {1,2,3,4,5};
	int *p = &a;
	printf("%d",p);
*/
	char str[] = "Hello";
	char *ptr = str;
	printf("%d", sizeof(ptr));
	printf("%d", strlen(ptr));

	return 0;
}

