#include<stdio.h>

struct node{

	int a;
	float b;
	double c;
	char d;
};

int main(){

	struct node s;

	int size = (int *)(&s+1) - (int *)(&s);
	printf("%d ",size);
	return 0;
}
