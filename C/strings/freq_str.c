#include<stdio.h>
#include<string.h>

int main(){
	char str[] = "rajashekarreddy";
	int res[256] = {0};

	for(int i=0;str[i] != '\0';i++){
		res[str[i]++];
	}
	for(int i=0;i<256;i++){
		printf("%c is have repeated %d times:",i,res[i]);
	}

	return 0;
}
