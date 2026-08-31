#include<stdio.h>

struct node{

	int a;
	float b;
	double c;
	char d;
};

int main(){

	struct node s[2];

	int size = (char *)&s[1] - (char *)&s[0];
	printf("%d ",size);
	return 0;
}
