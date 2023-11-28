#include <stdio.h>

int main() {
    int state = 0;  // 0: initial, 1: final accepting
    char input;

    printf("Enter a string: ");

    while (1) {
        scanf(" %c", &input);

        if (input == '\n') {
            break;  // End of input
        }

        switch (state) {
            case 0:
                state = (input == '0') ? 1 : 0;
                break;
            case 1:
                state = (input == '1') ? 1 : 0;
                break;
            default:
                printf("Invalid state encountered.\n");
                return 1;  // Exit with an error code
        }
    }

    if (state == 1) {
        printf("String is accepted.\n");
    } else {
        printf("String is not accepted.\n");
    }

    return 0;
}

