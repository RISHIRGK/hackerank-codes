#include <stdio.h>
int main()
{
    int n, k, c = 0, j;
    scanf("%d %d", &n, &k);
    int m = (n / k);
    int ar[(n - 1)];
    int b = 0;
    while (n > b)
    {
        scanf("%d", &ar[b]);
        b++;
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (ar[i] == ar[j])
                {
                    c++;
            
                }
               
            }
        }
    }
   if(m==(c/2))
   {
       printf("%d",m);
   }
    return 0;
}