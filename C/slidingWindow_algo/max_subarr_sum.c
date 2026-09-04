/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX(a,b)  ( ((a)>(b)) ? (a):(b) )

int main()
{
    // printf("Hello World");
    int arr[] = {2,5,1,8,2,9,1};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int k = 3;
    
    int i = 0;
    int j = 0;
    
    int sum = 0;
    
    int max = 0;
    
    while(j < size){
        
        
        if (j-i+1 < k){
            
            sum += arr[j];
            j++;
        }
        else if ( j-i+1 == k){
            
            sum += arr[j];
            
            max = MAX(max,sum);
            
            sum -= arr[i];
            
            j++;
            i++;
            
        }
    }
    printf("the largest sum = %d \n",max);
    return 0;
}
