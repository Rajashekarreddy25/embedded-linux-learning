#include<stdio.h>
#include<string.h>

int main(){
	char str[] = "rajashekarreddy";
	int res[26] = {0};

	for(int i=0;str[i] != '\0';i++){
		res[str[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if (res[i] == 0){
		continue;
		}
		else{
		printf("%c is have repeated %d times\n",i+97,res[i]);
		}
	}

	return 0;
}
