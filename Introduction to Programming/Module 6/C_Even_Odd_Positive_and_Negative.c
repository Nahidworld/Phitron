#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int x;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd++;
        }
        if (x > 0)
        {
            positive++;
        }
        else if (x == 0)
        {
        }
        else
        {
            negative++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}