#include <stdio.h>

int main()
{
    char a[25] = {0};
    char ch[25] = {0};
    char *b = a;
    char *c = ch;
    int index = 0, count = 0;

    printf("Enter 5 strings of not more than 4 characters : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", b);
        b += 5;
    }

    b = a;
    while (b != (a + 25))
    {
        if (*(b + count) == 0)
        {
            b += 5;
            count = 0;
        }
        else
            *(c + index++) = *(b + count++);
    }

    *(c + index) = 0;
    printf("%s", ch);
    return 0;
}