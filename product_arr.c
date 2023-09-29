/*Compute the product of an array except self.
WTD: For every index in the array, calculate the product of all numbers except for the
number at that index.
(e.g.: I/P: [1,2,3,4]; O/P: [24,12,8,6])*/

#include <stdio.h>

void compute_arr_product(int *arr,int n);

int main()
{
    int arr[50];
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
    }
    compute_arr_product(arr,n);
    return 0;
}

void compute_arr_product(int *arr,int n)
{
    int i,j,product = 1,res_arr[50];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i == j)
            continue;
            product = product * arr[j];
        }
        res_arr[i] = product;
        product = 1;
    }
    printf("Product of an array elemnts except self:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",*(res_arr+i));
    }
}