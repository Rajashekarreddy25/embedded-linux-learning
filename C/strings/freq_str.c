#include<stdio.h>
#include<string.h>

int main(){
	char str[20];
       //	= "rajashekarreddy";
	int res[26] = {0};
	printf("enter a string:");
	scanf("%s",str);
	for(int i=0;str[i] != '\0';i++){
		if (str[i] >= 65 && str[i] <=90){
			res[str[i]-'A']++;
		}
		res[str[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if (res[i] == 0){
		continue;
		}
		else{
		printf("freq of %c is  %d times\n",i+97,res[i]);
		}
	}

	return 0;
}
