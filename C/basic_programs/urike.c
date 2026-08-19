#include<stdio.h>
#include<stdint.h>
/*
int main(){
	char str[] = "rajashekar";

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		{
			if( j == 1)
				continue;
			printf("i=%d j=%d\n",i,j);
			printf("%s\n",str);
		}
	}

	return 0;
}
*/
int main(){

	uint8_t status = 0X0E;
	if (status & 1 << 3) {
		printf("Set");
	} else 
	{
		printf("Clear");
	}

	return 0;
}
