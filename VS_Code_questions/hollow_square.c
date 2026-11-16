#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the square
    if (scanf("%d", &n) == 1) {
        // Outer loop controls the rows (from 0 to n-1)
        for (int i = 0; i < n; i++) {
            // Inner loop controls the columns (from 0 to n-1)
            for (int j = 0; j < n; j++) {
                // Check if the current position is on any of the four boundaries
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                    putchar('*');
                } else {
                    // Print space for interior positions
                    putchar(' ');
                }
            }
            // Move to the next line after completing the row
            putchar('\n');
        }
    }
    
    return 0;
}