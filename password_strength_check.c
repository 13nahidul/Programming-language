#include <stdio.h>
#include <string.h>
int main() {
    char password[100];
    int i;
    int rule1 = 0, rule2 = 0, rule3 = 0;
    int rule4 = 0, rule5 = 0, rule6 = 1;   // rule6 starts as 1 (assume no spaces)
    int score = 0;
    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
    // Remove newline if present
    password[strcspn(password, "\n")] = '\0';
    int length = strlen(password);
    // Rule 1: Minimum 8 characters
    if(length >= 8)
        rule1 = 1;
    // Check remaining rules using loop
    for(i = 0; i < length; i++) {
        // Rule 2: Uppercase letter
        if(password[i] >= 'A' && password[i] <= 'Z')
            rule2 = 1;
        // Rule 3: Lowercase letter
        if(password[i] >= 'a' && password[i] <= 'z')
            rule3 = 1;
        // Rule 4: Digit
        if(password[i] >= '0' && password[i] <= '9')
            rule4 = 1;
// Rule 5: Special character
        if(password[i]=='!' || password[i]=='@' || password[i]=='#' ||
           password[i]=='$' || password[i]=='%' || password[i]=='^' ||
           password[i]=='&' || password[i]=='*')
            rule5 = 1;
// Rule 6: No spaces allowed
        if(password[i] == ' ')
            rule6 = 0;
    }
    score = rule1 + rule2 + rule3 + rule4 + rule5 + rule6;    // Calculate score
    printf("\nPassword Analysis:\n");    // Output analysis
    printf("Rule 1: Minimum 8 characters = %s\n", rule1 ? "YES" : "NO");
    printf("Rule 2: At least one uppercase letter = %s\n", rule2 ? "YES" : "NO");
    printf("Rule 3: At least one lowercase letter = %s\n", rule3 ? "YES" : "NO");
    printf("Rule 4: At least one digit = %s\n", rule4 ? "YES" : "NO");
    printf("Rule 5: At least one special character (!@#$%%^&*) = %s\n", rule5 ? "YES" : "NO");
    printf("Rule 6: No spaces in the password = %s\n", rule6 ? "YES" : "NO");
    printf("\nSCORE: %d/6\n", score);
    if(score <= 2)
        printf("STRENGTH: WEAK\n");
    else if(score <= 4)
        printf("STRENGTH: MEDIUM\n");
    else
        printf("STRENGTH: STRONG\n");
    return 0;
}
