#include <stdio.h>
#include<math.h>
int main()
{
    int n, r, g = 0, m = 1, b, k, ar[1000], i;
    scanf("%d",&n);
    int l = (int)log10(n) + 1;
    k = n;
    while (k > 0)
    {
        r = k % 10;
        int m = 1;
        for (size_t i = 0; i < r; i++)
        {
            m = m * (i + 1);
        }
        b = m;
        ar[g] = b;
        g++;
        k /= 10;
    }
    int sum = 0, j;
    for (size_t j = 0; j < l; j++)
    {
        sum += ar[j];
    }
    if (sum == n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}