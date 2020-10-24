#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for(i = 0; i < n-1; i++)
	
	for(j = 0; j < n-i-1; j++)
		if(arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";	
}


int main()
{ 
	
	int arr[10] = {};


	for (int i = 0; i < 10; ++i)
	{
		arr[i] = 0+rand() % 10;
	}
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	cout << "Sorted Array: \n";
	printArray(arr, n);
	return 0;
}

