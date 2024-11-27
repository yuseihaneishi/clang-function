unsigned int ft_strlen(const char *str)
{
    unsigned int length;

    length = 0;
    while(str[length])
        length++;
    return length;
}

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size)
{
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int i;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (size <= dest_len)
        return (size + src_len);

    i = 0;
    while(i < size - dest_len - 1 && (src[i] != '\0'))
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    if (size > dest_len)
        dest[dest_len + i] = '\0';
    return dest_len + src_len;
}

#include <stdio.h>
#include <string.h>

int main() 
{
    char dest[10] = "Hello";
    const char *src = "World";

    unsigned int result = ft_strlcat(dest, src, sizeof(dest));

    printf("Buffer: %s\n", dest);
    printf("Result: %d\n", result);

    return 0;
}