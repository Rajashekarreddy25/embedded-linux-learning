#include<stdio.h>

struct node{

	int a;
	float b;
	double c;
	char d;
};

int main(){

	struct node s[2];

	int size = (int*)&s[1] - (int*)&s[0];
	printf("%d ",size);

	return 0;
}
