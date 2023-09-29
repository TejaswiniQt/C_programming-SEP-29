/* ) Find all pairs of an integer array whose sum is equal to a given number.
WTD: Explore combinations of integer pairs in the array. Check if the sum of any of these
pairs matches a specified target number.
(e.g.: I/P: [2,4,3,5,6,-2,4,7,8,9], Sum: 7; O/P: [2,5],[4,3] )*/

#include <stdio.h>

void find_sum_in_array(int *arr,int n,int sum);

int main()
{
    int arr[50],n,sum,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
    }
    printf("Enter the sum: ");
    scanf("%d",&sum);
    find_sum_in_array(arr,n,sum);
    return 0;
}

void find_sum_in_array(int *arr,int n,int sum)
{
    int i,j,count=0;
    int arr2[50];
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if((arr[i]+arr[j]) == sum)
            printf("%d %d\n",arr[i],arr[j]);
        }
        arr2[count] = arr[i];
        count++;
    }
}