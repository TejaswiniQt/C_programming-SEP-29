/* Find duplicate numbers in an array if it contains multiple duplicates.
WTD: Examine the array to identify numbers that appear more than once. Compile a list of
these repetitive numbers.
(e.g.: I/P: [4,3,2,7,8,2,3,1]; O/P: [2,3] ) */

#include <stdio.h>

void find_dup_nums(int *arr,int n);

int main()
{
    int arr[50],n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
    }
    find_dup_nums(arr,n);
    return 0;
}

void find_dup_nums(int *arr,int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            printf("%d ",arr[i]);
        }
    }
}