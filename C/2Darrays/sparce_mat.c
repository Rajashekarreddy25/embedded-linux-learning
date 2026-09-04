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

	int m = 0;
	printf(" Row   coloum value\n ");
	for (int i =0;i<5;i++){
//		int m = 0;
		for(int j = 0;j<5;j++){
	
			if(mat[i][j] != 0){

				res[m][row] = i;
		        	res[m][col] = j;
				res[m][val] = mat[i][j];	
				m++;
			}

		}
	//	m++;
	}

	for (int i = 0;i < m;i++){
	//	for(int j = 0;j<3;j++){

			printf ("%d   %d   %d\n ",res[i][row],res[i][col],res[i][val]);
	//	}
	//	printf("\n");
	}
	return 0;
}

