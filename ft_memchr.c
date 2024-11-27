#include <stdio.h>

void* ft_memchr(const void* ptr, int value, int num) 
{
    const unsigned char* p;
    unsigned char target;
    p = (const unsigned char*)ptr;
    target = (unsigned char)value;

    int i = 0;
    while (i < num) 
    {
        if (p[i] == target)
            return (void*)&p[i];
        i++;
    }

    return NULL;
}

int main() 
{
    const char data[] = "Hello, world!";
    char target = 'o';
    int size = sizeof(data);

    char* result = (char*)ft_memchr(data, target, size);

    if (result) 
    {
        printf("'%c': %d\n", target, (int)(result - data));
    } else {
        printf("'%c' not found\n", target);
    }

    return 0;
}
