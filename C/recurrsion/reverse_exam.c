/*Write a C program to repeatedly reverse a given number and add it to the original number until a palindrome number is obtained. Print each intermediate result and the total number of iterations required.
i/p - 195 
o/p -
195 + 591 = 786
786 + 687 = 1473 
1473 + 3741 = 5214
5214 + 4125 = 9339
Palindrome = 9339  
Iterations = 4 
*/
#include<stdio.h>
int iterations = 0;
int reverse(int n){

	int rev = 0;
        int temp = n;
        while(temp!=0){
                int d = temp % 10;
                rev = (rev*10) + d;
                temp /= 10;
        }
	if (n == rev){
        return rev;
	}

	iterations++;

	return reverse( rev+n);

}
int main(){

	int n;
	printf("enter a no :");
	scanf("%d",&n);

	printf("%d \n",reverse(n));
	printf("iterations:%d ",iterations);
	return 0;
}
