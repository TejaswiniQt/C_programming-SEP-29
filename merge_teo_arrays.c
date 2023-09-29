/* Merge two sorted arrays to produce one sorted array.
WTD: Sequentially compare the elements of two sorted arrays, combining them into a
single array that remains sorted.
(e.g.: I/P: [1,3,5], [2,4,6]; O/P: [1,2,3,4,5,6] ) */

#include<stdio.h>

void merge_two_sorted_arr(int *arr1,int *arr2,int n);

int main()
{
    int arr1[50],arr2[50];
    int n,i,*ptr1 = arr1;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter the elements of array1: ");
    for(i=0; i<n; i++)
    scanf("%d",(ptr1+i));
    printf("Enter the elements of array2: ");
    for(i=0; i<n; i++)
    scanf("%d",(arr2+i));
    merge_two_sorted_arr(arr1,arr2,n);
    return 0;
}

void merge_two_sorted_arr(int *arr1,int *arr2,int n)
{
     int res_arr[50],i,min,max,count=0;
     for(i=0; i<n; i++)
     {
        if(arr1[i] < arr2[i])
        min = arr1[i];
        else
        min= arr2[i];
        if(arr1[i] > arr2[i])
        max = arr1[i];
        else
        max = arr2[i];
        res_arr[count++] = min;
        res_arr[count++] = max;
     }
     printf("Array after merging two arrays: ");
     for(i=0; i<n*2; i++)
     {
        printf("%d ",res_arr[i]);
     }
}