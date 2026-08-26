#include<stdio.h>

int main(){

	char str[] = "the quick brown fox jumps over the lay dog";

	int freq[26] ={0};
	int ispanagram = 1;

	for(int i=0;str[i] != '\0';i++){
		if (str[i] >= 'a' && str[i] <= 'z'){
			freq[str[i]-'a']++;
		}
	}

	for (int i=0;i<26;i++){
		if (freq[i] == 0)
			ispanagram = 0;
	}

	if(ispanagram)
		printf("panagram");
	else
		printf("Not a panagram");
	return 0;

}

