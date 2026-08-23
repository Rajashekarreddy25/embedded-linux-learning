#include<stdio.h>

char strcmpr(char *str1,char *str2){
	
	while( *str1 && (*str1 == *str2) ){

		*str1++;
		*str2++;
	}	
	return *str1 - *str2;
	}


int main(){

	char str1[] = "rajashekar";
	char str2[] = "rajashekar";

	int res = strcmpr(&str1,&str2);

	if (res == 0)
		printf("both strings are equal");
	else
		printf("both are not equal");

	return 0;
}
