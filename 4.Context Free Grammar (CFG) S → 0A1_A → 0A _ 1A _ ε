#include <stdio.h>
int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);
    // Check if the input string belongs to the language
    int i = 0;
    int success = 1;  // Assume success by default
    // Process S
    while (success && inputString[i] != '\0') {
        if (inputString[i] == '0') {
            i++;
            if (inputString[i] == '0') {
                i++;
                success = (inputString[i] == '0') ? 1 : 0;
            } else {
                success = 0;
            }
        } else if (inputString[i] == '1') {
            i++;
            if (inputString[i] == '1') {
                i++;
                success = (inputString[i] == '1') ? 1 : 0;
            } else {
                success = 0;
            }
        } else {
            success = 0;
        }
    }
    // Final result
    if (success) {
        printf("String belongs to the language.\n");
    } else {
        printf("String does not belong to the language.\n");
    }

    return 0;
}

