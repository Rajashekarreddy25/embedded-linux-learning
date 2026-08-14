#include<stdio.h>
int main(){
	char str[] = "rajashekar";

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		{
			if( j == 1)
				break;
			printf("i=%d j=%d\n",i,j);
			printf("%s\n",str);
		}
	}

	return 0;
}
