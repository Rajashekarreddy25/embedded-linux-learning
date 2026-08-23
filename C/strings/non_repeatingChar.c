#include<stdio.h>
#include<string.h>


char nonRepeatingChar(char *str){

	int n = strlen(str)-1;
	for(int i=0;i<n;i++){
		int found = 0;
		for(int j=i+1;j<n;j++){
			
			if( i!=j && str[i] == str[j]){
				found = 1;
				break;
			}
		}
		if(!found)
		//	printf("The first non repeating char is :%c",str[i]);
			return str[i];
	}
	return '$';
}

int main(){

	char str[] = "rajashekarreddy";

	printf("The first non repeating char is :%c ",nonRepeatingChar(str));

	return 0;
}


