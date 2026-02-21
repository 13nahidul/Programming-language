#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    int i, count = 0;
    printf("Enter your formal name: ");
    fgets(name, sizeof(name), stdin);

    printf("Vowels in your name: ");

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' ||
           name[i] == 'o' || name[i] == 'u' ||
           name[i] == 'A' || name[i] == 'E' || name[i] == 'I' ||
           name[i] == 'O' || name[i] == 'U') {

            printf("%c ", name[i]);
            count++;
        }
    }
    printf("\nTotal number of vowels: %d\n", count);
    return 0;
}
