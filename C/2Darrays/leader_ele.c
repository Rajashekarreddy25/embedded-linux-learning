#include<stdio.h>
/*
int main(){
	int ROW = 3,COL = 4;
	int mat1[3][4]= {{17,16,18,3},
		        {5,2,6,1},
			{9,8,7,6}};


//printf("the major ele is \n");
	for (int i=0;i<ROW;i++){
		printf("for row%d leader is :\n",i);
		for(int j=0;j<COL;j++){
			int leader = 1;
			for (int k=j+1;k<COL;k++){
				if (mat1[i][k] > mat1[i][j]){
				leader = 0;
				break;
				//	printf("the leader ele in row%d is %d\n",i,mat1[i][j]);
				}
					
	   		}
			if (leader){
				printf("the leader ele in row%d is %d\n",i,mat1[i][j]);
			}
			
		}

	}
		
	return 0;
}
*/
int main(){
	int row = 3;
	int col = 4;
	int mat[3][4] = {{17,16,18,3},
			{5,2,6,1},
			{9,8,7,6}};

	for (int i = 0 ;i<row;i++){
		printf("The leader elements in row%d is :",i);
		int maxright = mat[i][col-1];
		printf(" %d ",maxright);
		for (int j = col-2;j>=0;j--){
			if (mat[i][j] > maxright){
				maxright = mat[i][j];
				printf(" %d ",maxright);
				}
		}
		printf("\n");
	}

	return 0;
}


