#include <stdio.h>
int main()
{
    int pass;

    while(scanf("%d", &pass)) ///jotokkon input neoya jabe
    {
        if (pass != 1999)
        {
            printf("Wrong\n");
        }
        else
        {
            printf("Correct\n");
            break;
        }
    }
    return 0;
}

// this is EOF = End of File Concept
// Jptokkon input neooya jabe totokkhon input nibe. 