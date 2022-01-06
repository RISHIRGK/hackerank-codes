#include<stdio.h>
int main()
{
    int n,c=0,a=0,k;
    scanf("%d",&n);
    int arr[(n-1)];
    int i,j;
     for ( i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    
    }
    for ( j = 0; j < n; j++)
    {c=0;
        k=arr[j];
        while (k>0)
        {
            k/=10;
            c++;

        }

        if (c%2==0)
        {
            a++;

        }
        
    }
    printf("%d",a);
  
    return 0;
}
