#include<stdio.h>

#include<string.h>

int main(){

	char str1[] = "madam";
	char str2[] = "mdaam";

	int xor = 0;

	for (int i=0; str1[i] != '\0';i++){

		xor^=str1[i];
		xor^=str2[i];
	}

	if (xor == 0 ){
		printf("anagram");
	}
	else{
		printf("not an anagram");
	}


	return 0;
}
