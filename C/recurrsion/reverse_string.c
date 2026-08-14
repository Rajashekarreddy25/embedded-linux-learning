#include<stdio.h>
#include<string.h>
void reverse_str(char *str,int start,int end){
	if (!(start < end) )
		return;
	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	return reverse_str( str,start+1,end-1);

}
int main(){
	char str[20];
	//= "rajashekar";
	printf("enter a string: ");
	scanf("%s",str);
	int n = strlen(str)-1;
	reverse_str(str,0,n);
	printf("after the reverse: %s\n",str);

	return 0;
}


