#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the triangle
    if (scanf("%d", &n) == 1) {
        // Outer loop controls the rows (from 0 to n-1)
        for (int i = 0; i < n; i++) {
            // If it is the final row, print n asterisks
            if (i == n - 1) {
                for (int j = 0; j < n; j++) {
                    putchar('*');
                }
            } else {
                // For rows before the last one, iterate up to the current row index i
                for (int j = 0; j <= i; j++) {
                    // Print '*' if it's the first column (j == 0) or the diagonal boundary (j == i)
                    if (j == 0 || j == i) {
                        putchar('*');
                    } else {
                        // Print space for interior positions
                        putchar(' ');
                    }
                }
            }
            // Move to the next line after completing the row
            putchar('\n');
        }
    }
    
    return 0;
}