#include <stdio.h>
#include <stdlib.h>

int Sum(int * ptr2, int size);

void main (void){
	int x;
	int result;
	int * ptr;
	int i;
	
	printf("please enter the array length\n");
	scanf("%d", &x);
	int arr[x];
	ptr = &arr[0];
	for (i = 0; i < x; i ++){
	printf("\nEnter the number");
	scanf("\n%d", ptr + i);
	}
	result = Sum(arr,x);
	printf("\n%d", result);
}

int Sum(int * ptr2, int size){
	int sum=0;
	for (int i = 0; i < size; i ++){
		sum = sum + *(ptr2 + i);
	}
	return sum;
}