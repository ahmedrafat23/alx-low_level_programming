#include <stdio.h>

/*

Write a function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest

*/

char *_strcat(char *dest, char *src) {
    char *ptr = dest;
    
// Move the pointer to the end of dest
    while (*ptr != '\0') {
        ptr++;
    }
    
// Append src to dest
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    
// Add the terminating null byte
    *ptr = '\0';
    
    return dest;
}

int main() {
    char dest[50] = "Hello ";
    char src[] = "World!";
    
    printf("%s\n", dest);  // Hello World!
    printf("%s\n", src);  // World!
    printf("%s\n", _strcat(dest, src));  // Hello World!

    return 0;
}
