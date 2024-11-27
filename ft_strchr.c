#include <stdio.h>
char* ft_strchr(const char* str, int c) 
{
    while (*str) 
    {
        if (*str == c)
            return (char*)str;
        str++;
    }
    if (c == '\0')
        return (char*)str;
    return NULL;
}


// int main() {
//     const char* text = "Hello, world!";
//     char target = 'o';
//     char* result = ft_strchr(text, target);

//     if (result) {
//         printf("'%c': %ld\n", target, result - text); //アドレスの差で位置を表示
//     } else {
//         printf("'%c' not found\n", target);
//     }

//     return 0;
// }
