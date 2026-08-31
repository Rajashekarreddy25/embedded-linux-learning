#include<stdio.h>

struct node{

	int a;
	float b;
	double c;
	char d;
};

int main(){

	struct node s[2];

	int size = (int*)&s[0] - (int*)&s[1];

	printf("%d ",size);

	return 0;
}
