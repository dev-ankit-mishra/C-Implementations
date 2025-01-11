#include <Stdio.h>
#include <stdbool.h>

void binarySearch(int arr[], int k, int n)
{
    int s = 0;
    int e = n - 1;
    bool flag = false;
    int pos;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            pos = mid;
            flag = true;
            break;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    if (flag)
    {
        printf("Element is present at index : %d", pos);
    }
    else
    {
        printf("Element is not Present");
    }
}
int main()
{
    int n;
    int k;
    printf("Enter Size of Array: \n");
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter a number at index %d -> ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter number to be Searched: -> ");
    scanf("%d", &k);
    binarySearch(arr, k, n);
    return 0;
}
