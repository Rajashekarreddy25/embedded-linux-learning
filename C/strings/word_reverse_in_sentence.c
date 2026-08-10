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
	char str1[] = "Hello World!";
	int n = strlen(str1);
        int start = 0;
       int end = n-1;
/*	
       while (start < end){
	 char temp = str1[start];
 	str1[start] = str1[end];
	str1[end] = temp;
	start++;
	end--;
	}
	*/
       reverse(str1,start,end);
	printf("the string after reverse : %s\n",str1);
	start = 0;
	end = 0;
	while(str1[i] != ' '){
	end++;
	
	}
	printf("end afrter reverse: %d ",end);
	return 0;
}
