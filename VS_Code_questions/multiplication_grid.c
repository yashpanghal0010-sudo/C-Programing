#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the multiplication grid
    if (scanf("%d", &n) == 1) {
        // Outer loop controls the rows (from 1 to n)
        for (int i = 1; i <= n; i++) {
            // Inner loop controls the columns (from 1 to n)
            for (int j = 1; j <= n; j++) {
                // Print the product of the current row and column indices
                printf("%d", i * j);
                
                // Print a space after the number only if it's not the last column in the row
                if (j < n) {
                    putchar(' ');
                }
            }
            // Move to the next line after completing the current row
            putchar('\n');
        }
    }
    
    return 0;
}