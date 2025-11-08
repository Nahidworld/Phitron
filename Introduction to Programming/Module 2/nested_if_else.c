#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Going to Cox's Bazar!");
        tk = tk - 5000;
        if (tk >= 10000)
        {
            printf("Going to Saint Martin!");
        }
        else
        {
            printf("Come Back Home!");
        }
    }
    else
    {
        printf("Going Nowhere!");
    }

    return 0;
}