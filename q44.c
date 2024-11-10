#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal.\n");
        printf("Length of the strings: %lu\n", strlen(str1));
    } else if (result > 0) {
        strupr(str1);  
        strlwr(str2);  
        printf("str1 > str2\n");
        printf("str1 in uppercase: %s\n", str1);
        printf("str2 in lowercase: %s\n", str2);
    } else {
        strlwr(str1);  
        strupr(str2);  
        printf("str1 < str2\n");
        printf("str1 in lowercase: %s\n", str1);
        printf("str2 in uppercase: %s\n", str2);
    }

    return 0;
}
