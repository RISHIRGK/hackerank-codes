#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[(n-1)];
    int a[100];
    int sum=0,i,j,k;
     for (size_t i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    
    }
    for (size_t j = 0; j < n; j++)
    {
        sum=sum+arr[j];
        a[j]=sum;
    }
     for (size_t k = 0; k <n; k++)
    {
        printf("%d ",a[k]);
    
    }

    




    return 0;
}