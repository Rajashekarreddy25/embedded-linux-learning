#include<stdio.h>
#include<string.h>
int main(){
	char str1[] = "Hello World!";
	int n = strlen(str1);
        int start = 0;
       int end = n-1;
	while (start < end){
	 char temp = str1[start];
 	str1[start] = str1[end];
	str1[end] = temp;
	start++;
	end--;
	}
	printf("the string after reverse : %s\n",str1);


	return 0;
}
