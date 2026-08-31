#include<stdio.h>

enum week  {sun = 1001,mon,tues,wed,thus,friday,sat};

int main(){


	enum week today;

	today = tues;
	
	printf("%d ",today);

	return 0;
}
