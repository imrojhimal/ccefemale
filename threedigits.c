#include <stdio.h>

int main() {
    int A, B, C;

    // Iterate through possible values of A, B, and C
    for (A = 0; A <= 9; A++) {
        for (B = 0; B <= 9; B++) {
            for (C = 0; C <= 9; C++) {
                // Check if the equation holds true
                if (A * 111 + B * 101 + C * 10 == C * 111) {
                    // Print the values of A, B, and C
                    printf("A = %d, B = %d, C = %d\n", A, B, C);
                    return 0; // Exit after finding the first solution
                }
            }
        }
    }

    printf("No solution found.\n");
    return 0;
}
