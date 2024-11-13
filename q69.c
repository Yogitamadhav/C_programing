#include <stdio.h>
#include <string.h>

int main() {
    char str[100], c;
    int i = 0;
    char *ptr;

   
    printf("Enter string: ");
    gets(str);

    puts(str);
    printf("Enter character: ");
    scanf("%c", &c);
    ptr = strchr(str, c);
    while (ptr != NULL) {
        i++;
        ptr = strchr(ptr + 1, c); 
    }

    printf("The character '%c' occurs %d times in the string.\n", c, i);

    return 0;
}
