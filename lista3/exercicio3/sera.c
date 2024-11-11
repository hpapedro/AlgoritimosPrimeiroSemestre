#include <stdio.h>

int main()
{

    int i = 1;

    while (i < 101)
    {
        if (i % 5 == 0)
        {
            printf("%i\n", i);
        }
        i++;
    }

    return 0;
}