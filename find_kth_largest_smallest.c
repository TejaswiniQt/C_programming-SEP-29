/* ) Find the "Kth" max and min element of an array.
WTD: Sort the array and retrieve the kth largest and kth smallest numbers.
(e.g.: I/P: [7, 10, 4, 3, 20, 15], K=3; O/P: 7 ) */

#include<stdio.h>

void find_kth_largest_smallest(int *arr,int n,int k);

int main()
{
    int arr[50];
    int n,i,k;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
    }
    printf("Enter the kth element: ");
    scanf("%d",&k);
    find_kth_largest_smallest(arr,n,k);
    printf("kth largest and smallest element in array = %d, %d\n",arr[n-k],arr[0+k-1]);
    return 0;
}

void find_kth_largest_smallest(int *arr,int n,int k)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array after sorting:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
}