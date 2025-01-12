#include <stdio.h>
#include <limits.h>
void selectionSort(int arr[], int n)
{
	int i;
	int j;
	for (i = 0; i < n; i++)
	{
		int min = INT_MAX;
		int mindx = -1;
		for (j = i; j < n; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				mindx = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[mindx];
		arr[mindx] = temp;
	}
}
int main()
{
	int n;
	printf("Enter the size of the Array : \n");
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("Enter element at index %d ->", i);
		scanf("%d", &arr[i]);
	}
	printf("\n Array before Sorting \n : ");
	int j;
	for (j = 0; j < n; j++)
	{
		printf("%d ", arr[j]);
	}

	selectionSort(arr, n);
	printf("\n Array after Sorting \n : ");

	for (j = 0; j < n; j++)
	{
		printf("%d ", arr[j]);
	}
	return 0;
}