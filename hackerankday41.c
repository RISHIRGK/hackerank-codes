#include <stdio.h>
int main()
{
    int n, c = 0, h, s,m,d;
    scanf("%d", &n);
    int arr[104];
    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (size_t j = 0; j < n; j++)
    {
        arr[(n + j)] = arr[j];
    }
    int sum = 0;
    for (i = 0; i <= (2 * (n - 1)); i++)
    {
        s = arr[i] + arr[(i + 1)] + arr[(i + 2)];
        if (s == 0)
        {
            c++;
        }
    }
    for (i = 0; i <= (2 * (n - 1)); i++)
    {
        for (size_t j = i + 2; j <= (2 * (n - 2)); j++)
        {

            h = arr[i] + arr[(i + 1)] + arr[(j)];
            if (h == 0)
            {
                c++;
            }
        }
    }
    for (i = 0; i <= (2 * (n - 1)); i++)
    {
        for (size_t k = 0; k < (2 * (n - 1)); k++)
        {

            for (size_t j = i + 2; j <= (2 * (n - 2)); j++)
            {

                m = arr[i + j] + arr[i + (k + 2) + j] + arr[i + (k + 4) + j];
                if (m == 0)
            {
                c++;
            }
            }
        }
    }
    for (i = 0; i <= (2 * (n - 1)); i++)
    {
        for (size_t k = 0; k < (2 * (n - 1)); k++)
        {

            for (size_t j = i + 2; j <= (2 * (n - 2)); j++)
            {

                d = arr[i + j] + arr[i + 2 + j] + arr[i + (k + 4) + j];
                if (d == 0)
            {
                c++;
            }
            }
        }
    }
    if (c > 0)
    {
        printf("true");
    }
    else if (c == 0)
    {
        printf("false");
    }

    return 0;
}
