#include<stdio.h>
int main(){

	int mat[3][3] = {{1,2,3},
			 {4,5,6},
			 {7,8,9}};
	int row = 0;
	int col = 0;
	for(int i = 0 ;i<3;i++){
		col = 0;
		for(int j=0;i<3;j++){
			printf("%d ",mat[row][col]);
			row++;
			if(row == 2)
				break;
		}
		col++;
		for(int j=0;j<3;j++){
			printf("%d ",mat[row][col]);
			row--;
			if (row == 0)
				break;
		}
		col++;
		for(int j=0;i<3;j++){
                        printf("%d ",mat[row][col]);
                        row++;
                        if(row == 2)
                                break;
                }
               
	}

	return 0;
}
