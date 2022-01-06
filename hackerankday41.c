#include <stdio.h>
int main()
{
    int n,c=0;
    scanf("%d", &n);
    int arr[104];
    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (size_t j = 0; j < (n - 1); j++)
    {
      arr[(n+j)]=arr[j];    
    }
    int sum = 0;
    for (i = 0; i < (2*(n - 1)); i++)
    {
        arr[i] = arr[i] + arr[(i + 1)] + arr[(i + 2)];
        if (arr[i] == 0)
        {
            c++;
        }

    }
    if (c>0)
    {
        printf("true");
    }
    else if (c==0)
    {
        printf("false");
    }
    
    
    
    return 0;
}
