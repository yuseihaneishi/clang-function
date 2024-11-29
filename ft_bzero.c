void ft_bzero(void *s, int n) 
{
    unsigned char *ptr = s;
    while (n > 0) 
    {
        *ptr++ = 0;
        n--;
    }
}

#include <stdio.h>

int main() {
    char buffer[10] = "Hello";
    printf("Before: '%s'\n", buffer);
    ft_bzero(buffer, 5);
    printf("After: '%s'\n", buffer);
    return 0;
}