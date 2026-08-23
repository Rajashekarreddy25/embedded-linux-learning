#include<stdio.h>

char *strcpyy(char *src,char *dest){
	char *savedDest = dest;
	while(( *dest++ = *src++)){ 
	}	
	return savedDest;
	}


int main(){

	char str1[] = "rajashekar";
	char str2[15] ;
	       
	strcpyy(str1,str2);

	printf("%s",str2);

	return 0;
}
