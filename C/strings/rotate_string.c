#include<stdio.h>

char rotate(char str[],int start,int end){

	while(start < end){

		char temp = str[start];

		str[start] = str[end];

		str[end] = temp;

		start++;
		end--;
	}

}

int main(){
	char str[] = "rajashekar";

	int n = 0;
	while(str[n] != '\0'){
	
		n++;
	}
	int k;
	printf("enter the no.of pos to rotate :");
	scanf("%d",&k);
	k = k%n;

	rotate(str,0,k-1);
        rotate(str,k,n-1);
	rotate(str,0,n-1);
	
	printf("string after rotation:\n%s\n",str);
	return 0;
}
