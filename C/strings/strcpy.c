#include<stdio.h>

char strcpyy(char *src,char *dest){
	char *savedDest = dest;
	while(( *src++ = *dest++)){ 
		//(*str1 == *str2) ){

	//	str1++;
	//	str2++;
	}	
	return savedDest;
	}


int main(){

	char str1[] = "rajashekar";
	char str2[15] ;
//	= "rajahekar";

//	int res =
	       
//		strcmpr(str1,str2);

//	if (res == 0)
		printf("%s",strcpyy(str1,str2));
//	else
//		printf("both are not equal");

	return 0;
}
