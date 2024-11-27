#include <stdio.h>

char* ft_strrchr(const char* str, int c) 
{
    const char* result;
    result = NULL; 

    while (*str) 
    {
        if (*str == c) 
        { 
            result = str; 
        }
        str++; 
    }

    if (c == '\0') 
    {
        return (char*)str; 
    }

    return (char*)result; 
}

int main() 
{
    const char* text = "Hello, world!";
    char target = 'o';
    char* result = ft_strrchr(text, target);

    if (result) {
        printf("'%c'  %ld\n", target, result - text);
    } else {
        printf("'%c' not found\n", target);
    }

    return 0;
}
