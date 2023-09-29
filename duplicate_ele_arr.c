/* Find the duplicate number on a given integer array.
WTD: Inspect the provided array. Determine if there's any integer that appears more
frequently than it should, signifying a duplicate.
(e.g.: I/P: [3,1,3,4,2]; O/P: 3 )*/

#include <stdio.h>

void find_dup(int *arr,int n);

int main()
{
    int arr[50],i,n;
    printf("Enter the number of array eleemnts: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
    }
    find_dup(arr,n);
    return 0;
}

void find_dup(int *arr,int n)
{
    int arr1[50],i,j;
    printf("Duplicate element in the array : ");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            printf("%d ",arr[i]);
        }
    }
}