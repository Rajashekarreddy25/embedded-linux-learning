#include<stdio.h>
#include<string.h>
void reverse(char *str1,int start,int end){
while (start < end){
         char temp = str1[start];
        str1[start] = str1[end];
        str1[end] = temp;
        start++;
        end--;
        }

}
int main(){
	char str1[20];
       //	= "Hello World!";
       printf("enter a string:");
       scanf("%s",str1);
	int n = strlen(str1);
        int start = 0;
       int end = n-1;
       
       reverse(str1,start,end);
	printf("the string after 1st reverse : %s\n",str1);
	start = 0;
	end = 0;

	while(str1[end] !='\0'){
		while(str1[end] != ' ' && str1[end] != '\0'){
			end++;
		}
		reverse(str1,start,end-1);
		if (str1[end] == '\0')
			break;

		start = end+1;
		end++;
	}

	printf("the final string after reverse: %s ",str1);
	return 0;
}
