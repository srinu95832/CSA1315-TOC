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
                if (str[i] == 'o') {
                    currentState = 1; // Move to state 1 on 'o'
                }
                break;
            case 1: // State 1: After seeing 'o'
                if (str[i] == '1') {
                    currentState = 2; // Move to state 2 on '1'
                } else if (str[i] == 'o') {
                    currentState = 1; // Stay in state 1 on additional 'o'
                }
                break;
            case 2: // State 2: After seeing 'o1'
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
