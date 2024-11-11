#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 256 
int areAnagrams(char str1[], char str2[]) {
    int count[MAX] = {0}; 
   
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    for (int i = 0; str1[i] && str2[i]; i++) {
        count[tolower(str1[i])]++;   
        count[tolower(str2[i])]--;   
    }


    for (int i = 0; i < MAX; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

  
    printf("Enter the first string: ");
    gets(str1);
    str1[strcspn(str1, "\n")] = 0; 

    printf("Enter the second string: ");
    gets(str2);
    str2[strcspn(str2, "\n")] = 0; 

    
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
