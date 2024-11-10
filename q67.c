#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str); 
    
    char *pos = strchr(str, 'a');
    
    while (pos != NULL) {
        *pos = '*';               
        pos = strchr(pos + 1, 'a');  
    }

    printf("Modified string: ");
    puts(str);
    return 0;
}
