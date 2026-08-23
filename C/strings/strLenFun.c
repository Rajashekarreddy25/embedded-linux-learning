#include<stdio.h>

char strlength(char *str){

	int i = 0;
	 
	while(str[i]!='\0'){
		i++;
	}

	return i;
}

int main(){
	
	char str[] = "rajashekar";

	printf("Len of the string is :%d", strlength(str));

	return 0;
}
