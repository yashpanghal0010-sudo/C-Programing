#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the checkerboard
    if (scanf("%d", &n) == 1) {
        // Outer loop controls the rows (from 0 to n-1)
        for (int i = 0; i < n; i++) {
            // Inner loop controls the columns (from 0 to n-1)
            for (int j = 0; j < n; j++) {
                // If the sum of row and column indices is even, print 'X', otherwise print 'O'
                if ((i + j) % 2 == 0) {
                    putchar('X');
                } else {
                    putchar('O');
                }
            }
            // Move to the next line after completing the row
            putchar('\n');
        }
    }
    
    return 0;
}