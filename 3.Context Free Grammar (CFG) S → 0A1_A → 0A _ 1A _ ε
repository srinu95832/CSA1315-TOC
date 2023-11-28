#include <stdio.h>
int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);
    // Check if the input string belongs to the language
    int i = 0;
    int success = 1;  // Assume success by default
    // Check if the string starts with '0'
    if (inputString[i] == '0') {
        i++;
        // Process A
        while (inputString[i] == '0' || inputString[i] == '1') {
            i++;
        }
        // Check if the string ends with '1'
        if (inputString[i] == '1') {
            i++;
            // Check if the rest of the string follows the grammar for A
            while (inputString[i] == '0' || inputString[i] == '1') {
                i++;
            }
        } else {
            success = 0;  // String doesn't end with '1'
        }
    } else {
        success = 0;  // String doesn't start with '0'
    }
    // Final result
    if (success && inputString[i] == '\0') {
        printf("String belongs to the language.\n");
    } else {
        printf("String does not belong to the language.\n");
    }
    return 0;
}

