#include <stdio.h>
int main()
{
    int a, b, c;
    int min, max;
    scanf("%d %d %d", &a, &b, &c);

    // minimum
    if (a <= b)
    {
        if (a <= c)
        {
            min = a;
        }
        else
        {
            min = c;
        }
    }
    else
    {
        if (b <= c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
    }

    // maximum
    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else if (c >= a && c >= b)
    {
        max = c;
    }

    printf("%d %d", min, max);
}