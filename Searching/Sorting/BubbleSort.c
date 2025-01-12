#include <stdio.h>
void bubbleSort(int arr[], int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 1; j < n - i; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
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

	bubbleSort(arr, n);
	printf("\n Array after Sorting \n : ");

	for (j = 0; j < n; j++)
	{
		printf("%d ", arr[j]);
	}
	return 0;
}