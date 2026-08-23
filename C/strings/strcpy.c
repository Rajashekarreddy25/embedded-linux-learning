#include<stdio.h>

char strcmpr(char *str1,char str2){
	int i=0;
	int j=0;
	while(str1[i] != '\0' && str2[j] != '\0'){

		if (str1[i] != str2[j]){

			return str1[i] - str2[j];
		}
		i++;
		j++;
	
	return 0;
	}


int main(){

	char str1 = "rajashekar";
	char str2 = "reddyreddy";

	int res = strcmpr(str1,str2);

	if (res == 0)
		printf("both strings are equal");
	else
		printf("both are not equal");

	return 0;
}
