#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch == 'z')
    {
        ch = 'a';
        printf("%c", ch);
    }
    else
    {
        ch = ch + 1;
        printf("%c", ch);
        return 0;
    }
}