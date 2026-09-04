#include<stdio.h>

int main(){

	int mat[5][5]= {{0,0,3,0,4},
		      {0,0,5,7,0},
		      {0,0,0,0,0},
		      {0,3,2,0,0},
		      {0,2,6,0,0}};

//	int res[][3] ;
	printf(" Row   coloum value\n ");
	for (int i =0 ;i<5;i++){
		for(int j = 0;j<5;j++){
			
			if(mat[i][j] != 0){

				printf(" %d    %d   %d\n ",i,j,mat[i][j]);
			}

		}
//		printf("\n");
	}
	return 0;
}

