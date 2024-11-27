int ft_isdigit(int c)
{
    if(c >= '1' && c <= '9')
        return (1);
    else
        return (0);
}

#include <stdio.h>
int main(void)
{
    char c;
    int a;

    a = ft_isdigit(c);
    if (a != 0)
        printf("数値⚪︎\n");
    else
        printf("数値×\n");
    return (0);
}