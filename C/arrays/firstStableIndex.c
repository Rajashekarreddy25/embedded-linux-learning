#include<stdio.h>
int main(){


int nums[] = {5,0,1,4};
int  k = 3;
int res = -1;

    for(int i = 0;nums[i] != '\0';i++){
        int maxval = 0;
        int minval = 1000;
        for(int k = 0 ; k<=i;k++){
            if (nums[i] > maxval ){
                maxval = nums[i];
            }
        }
        for(int m = i; nums[m] != '\0';m++){

            if (nums[m] < minval){
                minval = nums[m];
            }
        }

        if ((maxval - minval) <= k){

            res = i;
        }
    }
    printf("First stable Index is : %d ",res);
return 0;
}
