#include<stdio.h>

#include<string.h>

int main(){

	char str[] = "maddiam";


	int start = 0;
	int end = strlen(str)-1;

	while(start < end){
		if (str[start] != str[end] ){
			printf("Not Palindrome");
			break;
		}

		start++;
		end--;
	}

	printf("Palindrome");

return 0;

}
