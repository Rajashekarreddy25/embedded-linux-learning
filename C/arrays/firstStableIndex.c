#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

/************************brute sol **********************/
/*
int main(){

	int nums[] = {0}; 
	//{3,2,1};
	// {5,0,1,4};
	int n = sizeof(nums)/sizeof(nums[0]);

	int  z = 0;
	int res = -1;

    for(int i = 0;i<n;i++){
        int maxval = INT_MIN;
        int minval = INT_MAX;
        for(int k = 0 ; k<=i;k++){
            if (nums[k] > maxval ){
                maxval = nums[k];
            }
        }
        for(int m = i; m < n;m++){

            if (nums[m] < minval){
                minval = nums[m];
            }
        }

        if ((long long)maxval - minval <= z){

            res = i;
	    break;
        }
    }
   	 printf("First stable Index is : %d ",res);
	return 0;
}

*/

/****************  optimal sol ******************/
int main(){

	  int  nums[] = {5,0,1,4};
	
	  int numsSize = sizeof(nums)/sizeof(nums[0]);

	   int *prefixMax = (int *)malloc(numsSize * (sizeof(int)));
           int *suffixMin = (int *)malloc(numsSize * (sizeof(int)));

            prefixMax[0] = nums[0];
            suffixMin[numsSize - 1] = nums[numsSize-1];

            for(int z = 1 ; z < numsSize; z++){
                if (nums[z] > prefixMax[z-1] ){
                    prefixMax[z] = nums[z];
                }
                else
                    prefixMax[z] = prefixMax[z-1];
            }
            for(int m = numsSize-2; m >= 0 ;m--){

                if (nums[m] < suffixMin[m+1]){
                    suffixMin[m] = nums[m];
                }
                else
                    suffixMin[m] = suffixMin[m+1];
            }

            for(int i = 0;i<numsSize;i++){
                if ((long long)prefixMax[i] - suffixMin[i] <= k){

                    return i;
                }
            }

        return -1;
}
