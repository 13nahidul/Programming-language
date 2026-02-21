#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};   // ASCII characters
    int i;

    printf("Enter first word: ");
    scanf("%s", str1);

    printf("Enter second word: ");
    scanf("%s", str2);

    // Check length first
    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagrams\n");
        return 0;
    }

    // Count characters of first string
    for(i = 0; str1[i] != '\0'; i++) {
        count[tolower(str1[i])]++;
        count[tolower(str2[i])]--;
    }

    // Check if all counts are zero
    for(i = 0; i < 256; i++) {
        if(count[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");

    return 0;
}
