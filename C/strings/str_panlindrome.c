#include<stdio.h>

#include<string.h>

int main(){

	char str[] = "maddam";
	int ispalindrome = 1;

	int start = 0;
	int end = strlen(str)-1;

	while(start < end){
		if (str[start] != str[end] ){
			//printf("Not Palindrome");
			ispalindrome = 0;
			break;
		}

		start++;
		end--;
	}
	if(ispalindrome)
		printf("Palindrome");
	else
		printf("Not Palindrome");

return 0;

}
