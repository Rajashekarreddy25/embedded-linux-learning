#include<stdio.h>

char strlen(char *str){

	int i = 0;
	 
	while(str[i]!='\0'){
		i++;
	}

	return i;
}

int main(){
	
	char str[] = "rajashekar";

	printf("Len of the string is :%d", strlen(str));

	return 0;
}
