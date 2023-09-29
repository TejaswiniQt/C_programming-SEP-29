/* Find the peak element in an array (greater than or equal to its neighbors).
WTD: Scrutinize the array to find an element that is both larger than its predecessor and its
successor.
(e.g.: I/P: [1, 3, 20, 4, 1, 0]; O/P: 20 ) */

#include<stdio.h>

void find_peak_element(int *arr,int n);

int main()
{
    int arr[50];
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
    }
    find_peak_element(arr,n);
    return 0;
}

void find_peak_element(int *arr,int n)
{
    int i,count=0,res_arr[50];
    for(i=1; i<n-1; i++)
    {
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
        {
            res_arr[count] = arr[i];
            count++;
        }
    }
    if(count == 0)
    {
        if(arr[0] > arr[1])
        {
        res_arr[count++] = arr[0];
        }
        else
        if(arr[n-1] >= arr[n-2])
        res_arr[count++] = arr[n-1];
    }
    for(i=0; i<count; i++)
    printf("%d ",*(res_arr+i));
}