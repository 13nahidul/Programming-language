#include <stdio.h>
#include <string.h>

void reverseStr(char *word) {
    int left = 0, right = strlen(word) - 1;
    while (left < right) {
        char tmp = word[left];
        word[left] = word[right];
        word[right] = tmp;
        left++;
        right--;
    }
}

int main() {
    char words[100][100];  // max word and word length
    int count = 0;         // word count

    // input and count words at the same time
    printf("Enter words: ");
    while (scanf("%s", words[count]) == 1) {
        count++;
    } // have to end input with ctrl+Z in the terminal

    // Reverse each word individually
    for (int i = 0; i < count; i++)
        reverseStr(words[i]);

    // Output 1: reversed words in reversed order
    printf("Output 1: ");
    for (int i = count - 1; i >= 0; i--)
        printf("%s\t", words[i]);

    printf("\n");
    // Output 2: reversed words in original order
    printf("Output 2: ");
    for (int i = 0; i < count; i++)
        printf("%s\t", words[i]);

    return 0;
}
