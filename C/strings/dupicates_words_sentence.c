#include<stdio.h>
#include<string.h>

int main(){

	char str[] = "Rajashekar Reddy vangala Reddy";

	char *token = strtok(str," ");
	
	int arr[5][12];
	
	int cnt =0;

	while(token != NULL && cnt < 5){
		
		strcpy(arr[cnt],token);

		cnt++;

		token = strtok(NULL," ");
	}

	for(int i =0;i<5;i++){
		for(int j=i+1;j<5;j++){

			if (strcmpr
