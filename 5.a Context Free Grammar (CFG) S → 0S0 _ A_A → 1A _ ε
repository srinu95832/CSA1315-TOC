#include <stdio.h>
#include<string.h#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string belongs to the language
    int i = 0, j = strlen(str) - 1;
    while (i <= j) {
        if (str[i] == '0' && str[j] == '1') {
            i++;
            j--;
        } else if (str[i] == 'e' && i == j) {
            i++;
        } else {
            break;
        }
    }

    if (i > j) {
        printf("The string belongs to the language.\n");
    } else {
        printf("The string does not belong to the language.\n");
    }

    return 0;
}
6>

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string belongs to the language
    int i = 0, j = strlen(str) - 1;
    while (i <= j) {
        if (str[i] == '0' && str[j] == '0') {
            i++;
            j--;
        } else if (str[i] == '1') {
            while (i <= j && str[i] == '1') {
                i++;
            }
        } else {
            break;
        }
    }

    if (i > j) {
        printf("The string belongs to the language.\n");
    } else {
        printf("The string does not belong to the language.\n");
    }

    return 0;
}
