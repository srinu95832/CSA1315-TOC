#include <stdio.h>
#include <stdbool.h>

#define MAX_STATES 100

int main() {
    int n; // Number of states
    int m; // Number of symbols
    int transitions[MAX_STATES][MAX_STATES]; // Transition table

    // Input: Number of states and symbols
    printf("Enter the number of states: ");
    scanf("%d", &n);

    printf("Enter the number of symbols: ");
    scanf("%d", &m);

    // Input: Transition table
    printf("Enter the transition table:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("d(%d, %c): ", i, 'a' + j);
            scanf("%d", &transitions[i][j]);
        }
    }

    // Calculate and print e-closure for all states
    printf("\ne-closure for all states:\n");
    for (int i = 0; i < n; i++) {
        printf("e-closure(%d): {", i);

        // Use a boolean array to mark visited states
        bool visited[MAX_STATES] = {false};
        visited[i] = true;

        // Depth-first search to find all states reachable by e-moves
        for (int j = 0; j < n; j++) {
            if (transitions[i][j] == -1 && !visited[j]) {
                printf("%d, ", j);
                visited[j] = true;

                // Continue DFS from the new state
                for (int k = 0; k < n; k++) {
                    if (transitions[j][k] == -1 && !visited[k]) {
                        printf("%d, ", k);
                        visited[k] = true;
                    }
                }
            }
        }

        printf("}\n");
    }

    return 0;
}
