#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string belongs to the language
    int i = 0;
    
    // Check for S ? A101A
    if (str[i] == '0' || str[i] == '1') {
        while (str[i] == '0' || str[i] == '1') {
            i++;
        }

        if (strncmp(&str[i], "101", 3) == 0) {
            i += 3;

            // Check for A ? 0A | 1A | e
            while (str[i] == '0' || str[i] == '1') {
                i++;
            }
        }
    }

    // If the entire string is processed, it belongs to the language
    if (i == strlen(str)) {
        printf("The string belongs to the language.\n");
    } else {
        printf("The string does not belong to the language.\n");
    }

    return 0;
}
