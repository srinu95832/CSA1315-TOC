#include <stdio.h>
int dfa(char input) {
    static int currentState = 0;
	switch (currentState) {
        case 0:
            if (input == 'a') {
                currentState = 1;
            } else {
                currentState = -1; 
            }
            break;
        case 1:
            if (input == 'a') {
                currentState = 2;
            } else {
                currentState = -1; 
            }
            break;
        case 2:
            currentState = -1; 
            break;
    }
	return currentState;
}
int main() {
    char inputString[100];
    printf("Enter the string: ");
    scanf("%s", inputString);
	int i = 0;
    while (inputString[i] != '\0') {
        if (dfa(inputString[i]) == -1) {
            printf("Invalid string!\n");
            return 0;
        }
        i++;
    }
    if (dfa('\0') == 2) {
        printf("Valid string!\n");
    } else {
        printf("Invalid string!\n");
    }

    return 0;
0}
