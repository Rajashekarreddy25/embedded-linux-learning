#include<stdio.h>

int main(){

	int arr[] = {1,2,3,4,5,9};

	int n = sizeof(arr)/sizeof(arr[0]);

	int k = 2;

	for (int i=0;i<n;i++){
		int sum=0;
		for(int j=i+1;j<n;j++){
			if (arr[i] + arr[j] == k){

