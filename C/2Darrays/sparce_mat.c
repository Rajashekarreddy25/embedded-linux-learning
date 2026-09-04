#include<stdio.h>

int main(){

	int mat[5][5]= {{0,0,3,0,4},
		      {0,0,5,7,0},
		      {0,0,0,0,0},
		      {0,3,2,0,0},
		      {0,2,6,0,0}};

	int res [10][3] ;
	int row = 0;
	int col = 1;
	int val = 2;
	printf(" Row   coloum value\n ");
	for (int i =0 ;i<5;i++){
		int m = 0;
		for(int j = 0;j<5;j++){
			
			if(mat[i][j] != 0){

			//	printf(" %d    %d   %d\n ",i,j,mat[i][j]);
			res[m][row] = i;
		        res[m][col] = j;
			res[m][val] = mat[i][j];	
			}

		}
		m++;
//		printf("\n");
	}



	for (int i = 0;i<5;i++){
		for(int j = 0;j<3;j++){

			printf ("%d ",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}

