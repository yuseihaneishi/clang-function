#include <stdio.h>

int ft_memcmp(const void* ptr1, const void* ptr2, int num) 
{
    const unsigned char* p1 = (const unsigned char*)ptr1;
    const unsigned char* p2 = (const unsigned char*)ptr2;

    int i = 0;
    while (i < num)
    {
        if (p1[i] != p2[i])
            return p1[i] - p2[i];
        i++;
    }

    return 0;
}

int main() 
{
    const char data1[] = "Hello, world!";
    const char data2[] = "Hello, world!";
    const char data3[] = "Hello, World!";

    int size = sizeof(data1);

    int result1 = ft_memcmp(data1, data2, size);
    printf("data1 vs data2: %d\n", result1);

    int result2 = ft_memcmp(data1, data3, size);
    printf("data1 vs data3: %d\n", result2);

    return 0;
}
