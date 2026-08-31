#include<stdio.h>

struct node{

	int a;
	float b;
	double c;
	char d;
};

int main(){

	struct node s;

	int size = (char *)(&s+1) - (char *)(&s);
	printf("%d ",size);
	return 0;
}
