#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    int currentState = 0; // Initial state
    int i = 0;

    // Simulation loop
    while (str[i] != '\0') {
        switch (currentState) {
            case 0: // State 0: Initial state
                if (str[i] == 'b') {
                    currentState = 1; // Move to state 1 on 'b'
                }
                break;
            case 1: // State 1: After seeing 'b'
                if (str[i] == 'a') {
                    currentState = 2; // Move to state 2 on 'a'
                }
                break;
            case 2: // State 2: After seeing 'ba'
                // Stay in state 2 for any input until the end of the string
                break;
        }
        i++;
    }

    // Check the final state
    if (currentState == 2) {
        printf("The string belongs to the language.\n");
    } else {
        printf("The string does not belong to the language.\n");
    }

    return 0;
}
