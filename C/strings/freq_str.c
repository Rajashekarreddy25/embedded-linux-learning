#include<stdio.h>
#include<string.h>

int main(){
	char str[] = "rajashekarreddy";
	int res[26] = {0};

	for(int i=0;str[i] != '\0';i++){
		res[str[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		printf("%c is have repeated %d times:",65+'i',res[i]);
	}

	return 0;
}
