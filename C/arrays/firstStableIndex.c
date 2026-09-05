#include<stdio.h>
int main(){


int nums[] = {3,2,1}
	// {5,0,1,4};
int n = sizeof(nums)/sizeof(nums[0]);

int  z = 1;
int res = -1;

    for(int i = 0;i<n;i++){
        int maxval = 0;
        int minval = 1000;
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

        if ((maxval - minval) <= z){

            res = i;
	    break;
        }
    }
    printf("First stable Index is : %d ",res);
return 0;
}
