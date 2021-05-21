#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int i, num, result = 0;
    scanf("%d", &i);
    char *s;
    scanf("%s", s);

    while (*s != '\0')
    {
        printf("%c", *s);
        s++;
    }

    for (int j = 0; j < i; j++)
    {
        num = s[j];
        num -= 48;
        result = (result * 10) + num;
    }
    printf("%d", result);

    return 0;
}